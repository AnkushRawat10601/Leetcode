class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int>hash(26,-1);
        for(int i=0;i<s.length();i++){
            if(hash[s[i]-97]!=-1){
                return s[hash[s[i]-97]];
            }
            hash[s[i]-97]=i;
        }
        return '-1';
        
    }
};