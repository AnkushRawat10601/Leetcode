// Given an integer n, return the number of trailing zeroes in n!.

// Note that n! = n * (n - 1) * (n - 2) * ... * 3 * 2 * 1.

 

#include<bits/stdc++.h>


//solution-------------------------------

class Solution {
public:
    int trailingZeroes(int n) {
        
        int ans=0;
        for(int i=5;i<=n;i=i*5)
        {
            ans=ans+n/i;
        }
        return ans;
        
    }
};




// Input: n = 3
// Output: 0
// Explanation: 3! = 6, no trailing zero.


// Input: n = 5
// Output: 1
// Explanation: 5! = 120, one trailing zero.


// Input: n = 0
// Output: 0