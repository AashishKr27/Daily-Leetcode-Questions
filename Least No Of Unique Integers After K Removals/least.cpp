/*
# LEAST NO. OF UNIQUE INTEGERS AFTER K REMOVALS : 

# DESCRIPTION : 
    -> Given an array of integers arr and an integer k. 
       Find the least number of unique integers after removing exactly k elements.

#APpROACH : 
    STEP 1 : Initialize an unordered map to store the frequency of each distinct element in the array.
    STEP 2 : Initialize a vector freq to store each frequency from the map.
    STEP 3 : Sort the freq vector.
    STEP 4 : Initialize a int variable count = 0 and iterate through the freq vector.
    STEP 5 : In each iteration update count by count = count + freq[i];
    STEP 6 : If count > k, return freq.size() - i // REMAINING ELEMENTS
    STEP 7 : Return 0 outside the loop in case if no elements are left in the freq array.

# TIME & SPACE COMPLEXITY : Insertion in map + Insertion in freq vector + Sorting freq vector + Iterating over freq vector
     -> T(n) = O(n) + O(n) + O(nlogn) + O(n) = O(n) // Worst case senario
     -> S(n) = O(n);
*/
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for(auto i : arr) mp[i]++;
        vector<int> freq;
        for(auto itr = mp.begin(); itr != mp.end(); itr++)
            freq.push_back(itr->second);
        sort(freq.begin(), freq.end());
        int count = 0;
        for(int i=0;i<freq.size();i++){
            count += freq[i];
            if(count > k) return freq.size() - i;
        }
        return 0;
    }
};