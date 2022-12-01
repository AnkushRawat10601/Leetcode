// Given an integer x, return true if x is a 
// palindrome , and false otherwise.

//solution-------------------------


class Solution {
public:
   int isPalindrome(int x){
    
    long num,a,s=0;
    num=x;
    while(x>0)
    {
        a=x%10;
        s=s*10+a;
        x=x/10;
        
        
    }
    if(s==num)
        return 1;
    else
        return 0;

}
};

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.


// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.