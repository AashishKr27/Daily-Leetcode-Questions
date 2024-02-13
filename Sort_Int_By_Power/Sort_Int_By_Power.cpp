/*
# Sort-Int-by-Power-Value :

# INSTUTION:
    The power of an integer x is defined as the number of steps needed to transform x into 1 using the following steps:
        if x is even then x = x / 2
        if x is odd then x = 3 * x + 1
    For example, the power of x = 3 is 7 because 3 needs 7 steps to become 1 (3 --> 10 --> 5 --> 16 --> 8 --> 4 --> 2 --> 1).
    Given three integers lo, hi and k. The task is to sort all integers in the interval [lo, hi] by the power value in ascending order, 
    if two or more integers have the same power value sort them by ascending order.
    Return the kth integer in the range [lo, hi] sorted by the power value.
    
# APPROACH:
    STEP 1 : Initialize a vector pair of integer type of size (hi - lo + 1)
    STEP 2 : Iterate through a loop from lo to hi and call a helper fuction for each value in the range
    STEP 3 : //INSIDE HELPER FUNCTION : 
                Iterate through a while loop untill the value "l" doesn't reduce to 1
                In each iteration, increament the count value, and update the value "l" either by l/2(if even) or
                3*l + 1(if odd);
                Return the count
    STEP 4 : Store each count in the vector and sort the vector w.r.t power value(or count);
    STEP 5 : Return the value at the kth postion
*/
class Solution {
private:
    int helper(int l, int count){
        while(l!=1){
            if(l%2 == 0){
                l = l/2;
                count++;
            }
            else{
                l = 3 * l + 1;
                count++;
            }
        }
        return count;
    }
public:
    int getKth(int lo, int hi, int k) {
        vector<pair<int, int>> power(hi - lo + 1);
        for(int i=lo;i<=hi;i++){
            power[i-lo] = make_pair(helper(i, 0), i);
        }
        sort(power.begin(), power.end());
        return power[k-1].second;
    }
};
