// A self-dividing number is a number that is divisible by every digit it contains.

// For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.
// A self-dividing number is not allowed to contain the digit zero.

// Given two integers left and right, return a list of all the self-dividing numbers in the range [left, right].

#include<bits/stdc++.h>

//solution---------------------------------------


class Solution {
public:
        vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> res;
        
        
        int num;
        int digit;
        
        
        for (int i = left; i <= right; i++) {
            
            num = i;
            
           
            while (num > 0) {
                
                digit = num % 10;
                
               
                if (digit == 0 || i % digit != 0) {
                    
                    break;
                }
                num = num / 10;
            }
            
            if (num == 0) {
                
                res.push_back(i);
            } 
        }
        
        return res;
    }
};








// Input: left = 1, right = 22
// Output: [1,2,3,4,5,6,7,8,9,11,12,15,22]


// Input: left = 47, right = 85
// Output: [48,55,66,77]