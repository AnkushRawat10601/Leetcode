// Given an integer n, return true if n has exactly three positive divisors. Otherwise, return false.

// An integer m is a divisor of n if there exists an integer k such that n = k * m.

#include<bits/stdc++.h>

//solution---------------------------


class Solution {
public:
    bool isThree(int n) {
        
        if(n==1)
            return false;
        if(floor(sqrt(n))!=ceil(sqrt(n)))
            return false;
        for(int i=2;i<sqrt(n);i++)
        {
            if(n%i==0)
                return false;
        }
        return true ;
        
    }
};




// Input: n = 2
// Output: false
// Explantion: 2 has only two divisors: 1 and 2.


// Input: n = 4
// Output: true
// Explantion: 4 has three divisors: 1, 2, and 4.
 