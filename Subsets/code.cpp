#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        for(int k=0;k<=(1<<n)-1;k++){
            vector<int> temp;
            for(int i=0;i<=n-1;i++){
                if(k & (1<<i)) temp.push_back(nums[i]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};