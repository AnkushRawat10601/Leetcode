class Solution {
public:
    bool isVowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' ||
        x == 'o' || x == 'u' || x == 'A' ||
        x == 'E' || x == 'I' || x == 'O' || x == 'U')
        return true;
    else
        return false;
}
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>pref(words.size()+1);
        int i=0;
        for(auto x:words){
            
                pref[i+1]=pref[i]+(isVowel(x[0]) and isVowel(x[x.size()-1]));
            i++;
           
        }
        vector<int> ans;
        for (int i = 0; i < queries.size(); i++) {
            ans.push_back(pref[queries[i][1] + 1] - pref[queries[i][0]]);
        }
        return ans;
        
    }
};