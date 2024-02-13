/*
# Majority-Element
	-> This is today's daily question on leetcode.

# PROBLEM STATEMENT
	-> You are given an integer array nums. Return the element that occurs more than n/2 times 
 	in the array, (whwre n is the size of the array).

# INSTUTION 
	-> The intuition behind this approach is that if an element
 	occurs more than n/2 times in the array (where n is the size of the array), 
 	it will always occupy the middle position when the array is sorted.
 	Therefore, we can sort the array and return the element at index n/2. 
  	Note : "THERE WILL ALWAYS BE A MAJORTY ELEMENT IN THE ARRAY"

# APPROACH
	STEP 1 : Sort the array, so the required majority element occupies the (n/2)th position.
 	STEP 2 : Return the element present at index n/2.
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};
