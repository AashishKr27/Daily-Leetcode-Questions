#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
# COUNT ELEMENTS WITH MAXIMUM FREQUENCY

# DESCRIPTION :
    -> You are given an array nums consisting of positive integers.
    -> Return the total frequencies of elements in nums such that those elements all have the maximum frequency.
    -> The frequency of an element is the number of occurrences of that element in the array.

# APPROACH :
    STEP 1 : Initialize an unordered map.
    STEP 2 : Iterate  through each elements in nums and count its frequencies.
    STEP 3 : Initialize an integer variable maxVal to find the maximum freq in the hash map.
    STEP 4 : Traverse the hash map again, and if(maxVal == freq) the update count by +maxVal.
    STEP 5 : Return count.

# TIME & SPACE COMPLEXITY :
    -> Time Complexity T(n) = O(n).
    -> Space complexit S(n) = O(n).
*/
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto i : nums) mp[i]++;
        int maxVal = 0;
        for(auto itr = mp.begin(); itr != mp.end(); itr++) {maxVal = max(maxVal, itr->second);}
        int count = 0;
        for(auto itr = mp.begin(); itr != mp.end(); itr++) {if(maxVal == itr->second) count += maxVal;}
        return count;
    }
};