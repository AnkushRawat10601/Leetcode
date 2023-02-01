class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="";
        for(auto i: word1){
            s1+=i;
        }
        
        string s2="";
        for(auto i: word2){
            s2+=i;
        }
        if(s1==s2)
            return true;
        return false;
    }
};