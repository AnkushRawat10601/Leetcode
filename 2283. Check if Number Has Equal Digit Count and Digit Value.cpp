class Solution {
public:
    bool digitCount(string s) {
        unordered_map<char, int>mp;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
        for(int i=0; i<s.size(); i++)
        {
            char c=i+'0';
            if(mp[c]!=s[i]-'0')
                return false;
        }
        
        return true;
    }
};