
//Given an integer num, return a string of its base 7 representation.

 

#include<bits/stdc++.h>


//solution---------------------------

class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)
        return "0";
        string result = "";
        int n = abs(num);
        while(n>0) {
            result = to_string(n%7) + result;
            n /= 7;
        } 
        return  num >= 0 ? result : ("-" + result);
    }
};


// Input: num = 100
// Output: "202"


// Input: num = -7
// Output: "-10"