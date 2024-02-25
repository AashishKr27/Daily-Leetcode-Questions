#include<bits/stdc++.h>
using namespace std;
/*
# DESCRIPTION : 
    -> There are n cities connected by some number of flights. 
    You are given an array flights where flights[i] = [fromi, toi, pricei] indicates 
    that there is a flight from city fromi to city toi with cost pricei.
    You are also given three integers src, dst, and k, return the cheapest price from src to dst with at most k stops. 
    If there is no such route, return -1.

# APPROACH : 
    -> STEP 1 : Initialize a vector cost with length n and fill it with INT_MAX.
    -> STEP 2 : Initialize the source index to 0 i.e. cost[src] = 0.
    -> STEP 3 : Start iterating from i = 0 to k so that you don't surpass the limit of max stops.
    -> STEP 4 : Create a temp array equal to cost array and start iterating over flights.
    -> STEP 5 : For each source node in flight, if the cost[source] != INT_MAX, update the cost of destination
                by the minimum cost.
    -> STEP 6 : Return cost[dst] if it isn't INT_MAX, else return -1.

# TIME & SPACE COMPLEXITY : 
    -> T(n) = O(k * flights.size())
    -> S(n) = O(n)
*/
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int> cost(n, INT_MAX);
        cost[src] = 0;
        for(int i=0;i<=k;i++){
            vector<int> temp = cost;
            for(auto flight : flights){
                if(cost[flight[0]] != INT_MAX){temp[flight[1]] = min(temp[flight[1]], flight[2] + cost[flight[0]]);}
            }
            cost = temp;
        }
        return cost[dst] == INT_MAX ? -1 : cost[dst];
    }
};