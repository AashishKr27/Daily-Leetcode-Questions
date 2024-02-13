/*
# Product-of-array-except-self

# DESCRIPTION :
    You are given an integer array nums. You need to return an array arr,
    such that arr[i] = product of all elements in the array except nums[i] itself.
    
# APROACH : 
    STEP 1 : INITIALIZATION : "(n -> length of the given array nums)"
                -> Initialize two arrays left and right of length n, to compute the left and right
                    product of each element the array. Initialize left[0] = 1 and right[n-1] = 1;
                -> Iterate nums from 1 to n and store the result by using relation left[i] = left[i-1] * nums[i-1];
                -> Iterate nums from n-2 to 0 and store the result by using relation right[i] = right[i+1] * nums[i+1];
    STEP 2 : COMPUTE FINAL RESULT :
                -> You can either use a new array of length n to store the result, or can use
                    the existing array nums to optimize the space complexity a little bit.
                -> For each index i in nums, nums[i] = left[i] * right[i];
    STEP 3 : RETURN FINAL RESULT :
                -> Return nums.
                
# TIME & SPACE COMPLEXITY : 
    -> The code has a worst case time complexity : O(n).
    -> The code has a space complexity : O(n).
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size());
        vector<int> right(nums.size());
        left[0] = 1;
        right[nums.size()-1] = 1;
        for(int i=1;i<nums.size();i++) left[i] = left[i-1] * nums[i-1];
        for(int i=nums.size()-2;i>=0;i--) right[i] = right[i+1] * nums[i+1];
        for(int i=0;i<nums.size();i++)
            nums[i] = left[i] * right[i];
        return nums;
    }
};
