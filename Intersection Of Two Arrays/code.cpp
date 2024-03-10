#include<bits/stdc++.h>
using namespace std;
/*
# INTERSECTION OF TWO ARRAYS

# DESCRIPTION :
    -> Given two integer arrays nums1 and nums2, return an array of their intersection. 
       Each element in the result must be unique and you may return the result in any order.
    
# APPROACH :
    STEP 1 : Sort both the arrays.
    STEP 2 : Initialize a set 's' and a vector 'ans'.
    STEP 3 : Initialize two pointers i & j and start iterating both the arrays.
    STEP 4 : Whenever we encounter any common number, insert it into the set (Set is to keep only unique numbers).
    STEP 5 : Copy all the elements from set to vector and return it.

# TIME & SPACE COMPLEXITY :
    -> T(n) = O(nlogn).
    -> S(n) = O(n).

# NOTE : " This question can be done in linear time also. "
*/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        set<int> ans;
        vector<int> res;
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] == nums2[j]) {ans.insert(nums1[i]); i++; j++;}
            else if(nums1[i] > nums2[j]) j++;
            else i++;
        }
        for(auto itr = ans.begin() ; itr != ans.end() ; itr++) res.push_back(*itr);
        return res;
    }
};