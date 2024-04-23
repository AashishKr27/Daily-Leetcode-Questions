# SUBSETS : 

# DESCRIPTION :
    -> You are given an integer array nums.
    -> The task is to find all possible subsets (power set) of nums.
    -> The solution should not contain any duplicates and can be given in any order.

# EXAMPLE:
    -> nums = [1,2,3]
    -> Output : [[],[1], [2], [3], [1,2], [1,3], [2,3], [1,2,3]]

# LOGIC:
    -> We can use some bit manipulation techniques to generate our answer.
    -> We know that if the array size is n, then the total number of subsets will be 2^n or (1 << n).
    -> We will consider 0 as DON'T PICK and ! as PICK.
    -> Take example : nums = [1,2,3]

          2  1  0 (INDEX)
    -------------
    0  :  0  0  0
    1  :  0  0  1
    2  :  0  1  0
    3  :  0  1  1
    4  :  1  0  0
    5  :  1  0  1
    6  :  1  1  0
    7  :  1  1  1

    -> For each set bit in the binary expression, pick up the value from the array nums corresponding
       the index of the set bit.

# APPROACH :
    STEP 1 : Initialize a 2D vector ans to store the power set and an integer n
             which represents the nums size.

    STEP 2 : To generate 2^n subsets, we need to iterate from 0 to 2^n-1 or from 0 to (1<<n) - 1.
             Using bitwise operators will be more efficient. 

    STEP 3 : Inside the loop, initialize a temporary array to store each generate subset.
             Iterate from 0 to n-1 (n bits for each binary expression). Check wheather the current
             bit is set or not by using the condition if(k & (1 << i) != 0) {k = [0,2^n-1] i = [0,n-1]}. 
             If it is set, add the element into the temp array.
             Outside the loop, push the temp array to the resultant array.

    STEP 4 : After the completion of the loop, return the resultant array ans.

# APPROXIMATE TIME & SPACE COMPLEXITY :
    T(n) = O(n * 2^n) // n for inner loop and 2^n for outer loop.
    S(n) = O(n * 2^n) // Maximum space each subset can take is n elements and there are 2^n such subsets
