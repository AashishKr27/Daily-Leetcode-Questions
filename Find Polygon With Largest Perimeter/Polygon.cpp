/*
# FIND POLYGON WITH LARGEST PERIMETER :

# DESCRIPTION : 
    -> You are given an array of positive integers nums of length n.
       A polygon is a closed plane figure that has at least 3 sides. 
       The longest side of a polygon is smaller than the sum of its other sides.

    -> The perimeter of a polygon is the sum of lengths of its sides.

    -> Return the largest possible perimeter of a polygon whose sides can be formed from nums, 
       or -1 if it is not possible to create a polygon.

# APPROACH : 
    STEP 1 : Check if the length of the array is greater than or equal to three or not.
             If yes then proceed to next step else return -1 as we cannot form a triangle/polygon with less than 3 sides.
    STEP 2 : Sort the given array nums.
    STEP 3 : Iterate the array from last index to 2nd index as we need at least 3 element to create a polygon.
    STEP 4 : For each element in the array, find the sum of all the elements preceding it. If the sum of those elements
             is greater than the current element, then return (curr_element + sum_of_preceding), else continue.
    STEP 5 : If the loop didn't return anything throughout its all iterations, that means no polygon is possible,
             so return -1.

# TIME & SPACE COMPLEXITY : 
    -> Time complexity = Sorting + Iteration = O(nlogn) + O(n^2) = O(n^2).
    -> Space complexity = O(1).
*/
class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        if(nums.size() < 3) return -1;
        sort(nums.begin(), nums.end());
        for(int i = nums.size()-1;i>=2;i--){
            long long sum = 0;
            for(int j=0;j<i;j++){
                sum += nums[j];
            }
            if(sum <= nums[i]) continue;
            else return nums[i] + sum;
        }
        return -1;
    }
};