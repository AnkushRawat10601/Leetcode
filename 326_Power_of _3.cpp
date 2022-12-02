// Given an integer n, return true if it is a power of three. Otherwise, return false.

// An integer n is a power of three, if there exists an integer x such that n == 3x.

#include<bits/stdc++.h>

//solution-----------------------------------


class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0)
        return false;
        while(n%3==0)n=n/3;

        if(n==1)
        return true;
        else
        return false;
    }
};


// Input: n = 27
// Output: true
// Explanation: 27 = 33


// Input: n = 0
// Output: false
// Explanation: There is no x where 3x = 0.