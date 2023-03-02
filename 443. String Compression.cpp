class Solution {
public:
    int compress(vector<char>& chars) {
     int l=chars.size();
     int strtind=0;
     int i=0;
     if(l==1)
     return 1;
     else {
     for(;i<l;)
     {
         char curr=chars[i];
         int flag=0;
         while(i<l && chars[i]==curr)
         {
             i++;
             flag++;
         }
         chars[strtind]=curr;
         strtind++;
         if(flag>1)
         {
             string flagstr=to_string(flag);
             for(char &c:flagstr)
             {
                 chars[strtind]=c;
                 strtind++;
             }
         }
     }
     }
     return strtind;   
    }
};
