/*
# SEARCHING IN A ROTATED ARRAY:

# DESCRIPTION : 
    -> In this problem, we are given an array nums rotated by an arbitiary index k such that, 
       {nums[0], nums[1],.....,nums[k], nums[k+1],....,nums[n-1]} = {nums[k], nums[k+1],........nums[n-1],nums[0]...nums[k-1]}.
    -> Our task is to search for a target value in the array "IN O(logn) TIME COMPLEXITY".

# APPROACH : 
    "NOTE : This problem can be solved simple linear search approach also."
    STEP 1 : Initialize low = 0 and high = n-1;
    STEP 2 : Iterate through the array using a while loop with condition low <= high.
    STEP 3 : Since the array is rotated, there will always be two sections, 
             one will be sorted and another will be unsorted.
    STEP 4 : Calculate mid = (low + high)/2. If nums[mid] == target : return mid
    STEP 5 : Identify which part is sorted and if the target value lies in that part or not.
    STEP 6 : If the left section is sorted, then nums[low] <= nums[mid].
                    -> if(nums[low] <= target && target < nums[mid]) then set high = mid - 1
                    -> else set low = mid + 1
    STEP 7 : If the right section is sorted, then nums[mid] <= nums[high]
                    -> if(nums[mid] <= target && target > nums[high]) then set low = mid + 1
                    -> else set high = mid - 1
    STEP 8 : Repeat steps 3-7 until low becomes greater than
    STEP 9 : If you have iterated the complete array, and didn't find the element, then return -1

# TIME COMPLEXITY : 
    -> Since this method is using the concept of binary searching, then T(n) = O(logn).
*/
class Solution {
public:
    int search(vector<int>& nums, int t) {
        int low = 0, high = nums.size()-1;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] == t) return mid;
            if(nums[low] <= nums[mid]){
                if(nums[low] <= t && t < nums[mid]) high = mid - 1;
                else low = mid + 1;
            }
            else{
                if(nums[mid] < t && t <= nums[high]) low = mid + 1;
                else high = mid - 1;
            }
        }
        return -1;
    }
};
