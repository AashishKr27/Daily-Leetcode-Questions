# DIVIDE TWO INTEGERS : 

# DESCRIPTION :
    -> You are given two integers dividend and divisor.
    -> The task is to divide the dividend by the divisor and return the quotient as answer.
    -> The problem is you CANNOT use multiplication, division and mod operator.

# APPROACH :
    STEP 1 : Initialize two long variables n and d, and initialize them to absolite values of
             dividend and divisor respectively.

    STEP 2 : Initalize a boolean variable sign and assign it  either true (+ve) or false (-ve)
             according to the dividend and divisor sign.

    STEP 3 : Initalize a long variable ans = 0.

    STEP 4 : Create a while loop with a condition "n >= d". Inside this loop, perform the following:
             -> Initialize a variable cnt = 0.
             -> Create a while loop with a condition n >= d << (cnt+1). Inside this inner loop, increment cnt.
             -> Outside this loop, update ans += 1 << cnt and n -= d << cnt.

    STEP 5 : If the ans is exeeding the integers limit, then return INT_MAX / INT_MIN according to the sign.

# APPROXIMATE TIME & SPACE COMPLEXITY :
    T(n) = O((log n)^2)
    S(n) = O(1)