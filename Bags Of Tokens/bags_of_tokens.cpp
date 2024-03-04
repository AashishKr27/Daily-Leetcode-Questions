#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
# BAGS OF TOKENS :

# DESCRIPTION :
    -> You start with an initial power of power, an initial score of 0, 
       and a bag of tokens given as an integer array tokens, 
       where each tokens[i] donates the value of tokeni.

    -> Your goal is to maximize the total score by strategically playing these tokens. 
       In one move, you can play an unplayed token in one of the two ways (but not both for the same token):

        ~ Face-up: If your current power is at least tokens[i], 
          you may play tokeni, losing tokens[i] power and gaining 1 score.

        ~ Face-down: If your current score is at least 1,
          you may play tokeni, gaining tokens[i] power and losing 1 score.
    
    -> Return the maximum possible score you can achieve after playing any number of tokens.

# APPROACH :
    STEP 1 : Sort the tokens array and initialize two pointers low = 0 and high = n-1;
    STEP 2 : Iterate over tokens till low <= high;
    STEP 3 : If tokens[low] >= power, that means you increament your score by consuming
             tokens[low] power. Therefore, do score++; power -= tokens[low]; low++;
    STEP 4 : Else If  score > 0 && low < high, that means you still have more than one token left,
             and you can increase your power and lose your score. Therefore, do score--; power += tokens[high];
             high--;
    STEP 5 : Else return score;
*/
class Solution {
public:
    int bagOfTokensScore(vector<int>& t, int p) {
        sort(t.begin(), t.end());
        int n = t.size();
        int i=0;int j=n-1;
        int score = 0;
        while(i <= j){
            if(p >= t[i]) {score++; p -= t[i]; i++;}
            else if(score > 0 && i < j) {score--; p += t[j]; j--;}
            else return score;
        }
        return score;
    }
};