/*
# Rearrange Array Elements By Sign : 

# DESCRIPTION :
    -> You are given a 0-indexed integer array nums of even length 
       consisting of an equal number of positive and negative integers.
       
# RULES FOR REARRANGING THE ARRAY : 
    1) Every consecutive pair of integers have opposite signs.
    2) For all integers with the same sign, the order in which they were present in nums is preserved.
    3) The rearranged array begins with a positive integer.
    -> Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

# APPROACH :
    "WE CAN USE THE MERGE SORT APPROACH TO SOLVE THIS PROBLEM"
    STEP 1 : Initialize to vectors pos and neg to store positive and negative
             initegers respectively.
    STEP 2 : Iterate through the array and store the positive and negative
             integers alternatively in the resultant array.
    STEP 3 : Return the resultant array.

# TIME & SPACE COMPLEXITY : 
    -> The time complexity of this solution is O(n), and
    -> The space complexity of this solution is O(n), where n is the size of the array nums.*/
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        for(auto i : nums){
            if(i > 0) pos.push_back(i);
            else neg.push_back(i);
        }
        nums.clear(); // O(n)
        for(int i=0;i<pos.size();i++){
            nums.push_back(pos[i]);
            nums.push_back(neg[i]);
        }
        return nums;
    }
};