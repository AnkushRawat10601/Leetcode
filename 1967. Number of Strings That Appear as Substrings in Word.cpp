class Solution {
public:
    int numOfStrings(vector<string>& patt, string word) {
        int count = 0;
        for(int i=0;i<patt.size();i++) {
            int k = 0;
            while(k < word.size()) {
                string s = word.substr(k);
            
                if(patt[i] == s.substr(0, patt[i].size())){
                    count++;
                    break;
                }
                else {
                    k++;
                }
            }
        }
        return count;
    }
};