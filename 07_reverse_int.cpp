// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go 
// outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

#include<bits/stdc++.h>

//solution---------------------------------------


class Solution {
public:
    int reverse(int x) {
        
        int r=0,num=0;
        while(x!=0)
        {
            r=x%10;
            if ((num > INT_MAX / 10) || (num < INT_MIN / 10))
                return 0;
            num=num*10+r;
            x=x/10;
        }
        return num;
        
        
    }
};

// Input: x = 123
// Output: 321

// Input: x = -123
// Output: -321