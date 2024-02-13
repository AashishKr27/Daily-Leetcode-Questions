/*
# Remove-Duplicates-From-Sorted-Array-II : Daily dose of C++

# DESCRIPTION:
    -> Given an integer array nums sorted in non-decreasing order, 
    remove some duplicates in-place such that each unique element appears at most twice. The relative order of the elements should be kept the same.
    Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. 
    More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. 
    It does not matter what you leave beyond the first k elements. Return k after placing the final result in the first k slots of nums.
    
# APPROACH:
    -> We can simply iterate through the array
       to find the solution.
    -> It is already mentioned that we have to return k after 
       after replacing the final result in the first k slots.
    STEP 1 : Initialize a integer type variable count to keep the track of the
             the maxinum possible elements in the 
             element with each have frequency of atmost 2.
    STEP 2 : Iterate through the array and do the following things if nums[count - 2] != current element : 
                1) Replace the value of num[count] by current value.
                2) Increament count.

# TIME COMPLEXITY:
    -> The worst case time complexity of the given solution will be O(n).
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        for(auto i : nums){
            if(count == 0 || count == 1 || nums[count - 2] != i)
                nums[count] = i, count++;
        }
        return count;
    }
};
