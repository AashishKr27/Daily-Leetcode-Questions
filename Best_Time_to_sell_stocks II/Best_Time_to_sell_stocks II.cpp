/*
# Best-Time-to-Buy-and-Sell-Stock-II :
    -> This question was a bit tricky but was way easy than it looks like.

# DESCRIPTION :
    -> You are given an integer array prices where prices[i] is the price of a given stock on the ith day.
      On each day, you may decide to buy and/or sell the stock. 
      You can only hold at most one share of the stock at any time.
      Find and return the maximum profit you can achieve.

# APPROACH : 
    -> "JUST KEEP THE TRACK WHEN THE STOCK PRICES ARE GOING UP"
    STEP 1 : Initialize a variable maxProfit to keep the track of maximum profit    
             you can earn.
    STEP 2 : Iterate through the profit array, compare adjacent prices in each iteration and
             update the maxProfit.
    STEP 3 : Return the maxProfit.
*/
class Solution {
public:
    int maxProfit(vector<int>& p) {
        int profit = 0;
        for(int i=1;i<p.size();i++){
            if(p[i-1] < p[i]) profit += p[i] - p[i-1];
        }
        return profit;
    }
};
