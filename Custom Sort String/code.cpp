#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string customSortString(string order, string s) {
        string str = "";
        unordered_map<char, int> mp;
        for(auto i : s) mp[i]++;
        for(int i=0;i<order.size();i++){
            if(find(s.begin(), s.end(), order[i]) != s.end()){
                int k = mp[order[i]];
                while(k) {str += order[i]; --k;}
            }
        }
        string temp = "";
        for(int i=0;i<s.size();i++){
            if(find(str.begin(), str.end(), s[i]) == str.end()){temp += s[i];}
        }
        sort(temp.begin(), temp.end());
        return str + temp;
    }
};