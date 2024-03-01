#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
# MAXIMUM ODD BINARY NUMBER

# DESCRPTION :
    -> You are given a binary string s that contains at least one '1'.
       You have to rearrange the bits in such a way,
       that the resulting binary number is the maximum odd binary number that can be created from this combination.
       Return a string representing the maximum odd binary number that can be created from the given combination.

# APPROACH :
    NOTE : " We know that every binary representation of an odd number always consist of atleast one '1'
           as a leading bit. Hence, all we need to do is to rearrange the string in such a way that,
           one '1' will be placed at the end, and all other will be placed left to right.
           i.e. 0101 => 1001, 1100100 => 1100001, 111001110 => 111110001. "

    STEP 1 : Sort the string to get all '1' bits together from right to left.

    STEP 2 : Start iterating the string from the first index to second last, and swap each '1' such that,
             all '1' (except the last one) are being placed from left to right continuously.

    STEP 3 : Return final string.

TIME & SPACE COMPLEXITY :
    T(n) = Sorting + Iteration = O(nlogn) + O(n) = O(nlogn).
    S(n) = O(1).
*/
class Solution {
public:
    string maximumOddBinaryNumber(string str) {
        sort(str.begin(), str.end());
        int i=0;
        for(int j=0;j<str.size()-1;j++){
            if(str[j] == '1') {swap(str[i], str[j]) ;i++;}
        }
        return str;
    }
};