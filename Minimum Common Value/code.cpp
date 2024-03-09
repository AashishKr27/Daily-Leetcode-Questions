#include<bits/stdc++.h>
using namespace std;
/*
# MINIMUM COMMON VALUE :

# DESCRIPTION :
    -> Given two integer arrays nums1 and nums2, sorted in non-decreasing order,
       return the minimum integer common to both arrays. 
       If there is no common integer amongst nums1 and nums2, return -1.

    -> Note that an integer is said to be common to nums1 and nums2,
       if both arrays have at least one occurrence of that integer.

# APPROACH :
    -> The approach is very simple. We will use two pointers approach for solving this problem.
    STEP 1 : Initialize two pointers i & j.
    STEP 2 : Start iterating both nums1 && nums2.
    STEP 3 : As both the arrays are already sorted, therefor, the moment you find a common value,
             this value will be the smallest / minimum value of the array. Return this value.
    STEP 4 : If you have iterated one or both arrays without finding minimum value, return -1.

# TIME & SPACE COMPLEXITY :
    -> T(n) = O(n+m) // Iterating both the arrays.
    -> S(n) = O(1) // No extra space is used.
*/
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] == nums2[j]) return nums1[i];
            else if(nums1[i] > nums2[j]) j++;
            else i++;
        }
        return -1;
    }
};