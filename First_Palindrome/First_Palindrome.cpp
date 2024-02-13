class Solution {
private:
    bool palindrome(string s){
        int i=0;
        int j = s.size()-1;
        if(s.size() == 2 || s.size() == 3){
            if(s[i] == s[j]) return true;
            else return false;
        }
        while(i < j){
            if(s[i] != s[j]) return false;
            else{
                i++;
                j--;
            }
        }
        return true;
    }
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0; i < words.size(); i++){
            bool k = palindrome(words[i]);
            if(k) return words[i];
        }
        return "";
    }
};