#include<bits/stdc++.h>
using  namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor) return 1;
        if(abs(dividend) == abs(divisor)) return -1;
        long n = abs(dividend);
        long d = abs(divisor);
        long ans = 0;
        bool sign = true;
        if(dividend < 0 && divisor > 0) sign = false;
        if(dividend >= 0 && divisor < 0) sign = false;
        while(n >= d){
            int cnt = 0;
            while(n >= (d << (cnt+1))) {cnt++;}
            ans += 1 << cnt;
            n -= d << cnt;
        }
        if(ans == (1<<31) && sign) return INT_MAX;
        if(ans == (1<<31) && !sign) return INT_MIN;
        return sign ? ans : -ans;
    }
};