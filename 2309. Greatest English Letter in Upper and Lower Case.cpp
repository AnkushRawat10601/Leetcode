class Solution {
public:
    string greatestLetter(string s) 
    {

        unordered_map<char, int> mp;
        
        
        for(auto it: s)
        {
            mp[it]++;
        }
        sort(s.begin(), s.end());
        string ans = "";
        for(int i=0; i<s.size(); i++)
        {
            
            char l = tolower(s[i]);
            char u = toupper(s[i]);
            
           
            if(mp[l] && mp[u])
            {
                ans = u;      
            }     
        }
        
        return ans;
    }
};