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