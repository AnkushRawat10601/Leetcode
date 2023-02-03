class Solution {
public:
    int partitionString(string s) 
    {
       int num=0;
   
       int idx=0;
       int count=0;
       while(idx < s.length())
       {
           char ch = s[idx];
           int offset = ch - 'a';

           if((num & (1<<offset)) > 0)
           {
             count++;
             num=0;	
           }	
           num = num ^ (1<<offset);
           idx++;
       }
       return count+1;    
    }
};