# CUSTOM SORT STRING : 

# DESCRIPTION :
    -> You are given two strings order and s. 
       All the characters of order are unique and,
       were sorted in some custom order previously.

    -> Permute the characters of s so that they match the order that order was sorted.
       More specifically, if a character x occurs before a character y in order,
       then x should occur before y in the permuted string.

    -> Return any permutation of s that satisfies this property.

# APPROACH :
    STEP 1 : Initialize an empty string str and a hash map to store the frequency of each
             element in string s.
    STEP 2 : Iterate through order string and concatenate each character present in s accodring to
             their count.
    STEP 3 : Now, initialize a string temp to keep all other remainig element from s which are not prrsent in order
             in sorted order.
    STEP 4 : Return the concatenation of str + temp.

# TIME & SPACE COMPLEXITY :
    T(n) = O(n^2)
    S(n) = O(n)