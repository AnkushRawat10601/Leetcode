class Solution {
public:

    bool checkInclusion(string s1, string s2) {
    int n1=s1.length();
    int n2=s2.length();
    int v1[26]={0};
           for(auto &it : s1) v1[it-'a']++;
      
     
     for(int l = 0; l < n2-n1+1; ++l)
     {
        int v2[26] = {0};
        int flag = 1;
       
       for(int r = l; r < l+n1; ++r) v2[s2[r]-'a']++;
       
       for(int i = 0; i < 26; ++i)
       {

         if(v2[i] != v1[i])
         {
           flag = 0;
           continue;
         }
         
       }

       if(flag == 1) return true;  
     }
      
      return false; 
    }
};
