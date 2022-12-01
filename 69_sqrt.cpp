// Given a non-negative integer x, return the square root of x rounded down to the nearest integer.
// The returned integer should be non-negative as well.

#include<bits/stdc++.h>
//solution------------------------------

class Solution {
public:
    int mySqrt(int x) {
        int ans;
        ans=sqrt(x);
        return ans;
        
        
    }
};


// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.


// Input: x = 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., 
// and since we round it down to the nearest integer, 2 is returned.