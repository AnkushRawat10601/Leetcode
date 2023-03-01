class Solution {
public:
    string oddString(vector<string>& words) {
        map<vector<int>, int> mp;
        int n = words.size();
        int m = words[0].size();
        map<vector<int>, string> toMark;
        for(int i = 0; i < n; i++) {
            vector<int> temp(m - 1);
            for(int j = 1; j < m; j++) {
                int diff = words[i][j] - words[i][j - 1];
                temp[j - 1] = diff;
            }
            mp[temp] += 1;
            toMark[temp] = words[i];
        }
        string res;
        for(auto it: mp) {
            if(it.second == 1) {
                return res = toMark[it.first];
            }
        }
        return res;
    }
};
