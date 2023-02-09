class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        long long disName = 0;
        vector<unordered_set<string>> arr(26);
        for (string s : ideas) 
            arr[s[0] - 'a'].insert(s.substr(1));
        
        for (int i = 0; i < 25; i++) {
            for (int j = i + 1; j < 26; j++) {
                unordered_set<string> set;
                set.insert(arr[i].begin(), arr[i].end());
                set.insert(arr[j].begin(), arr[j].end());
                disName += (arr[i].size() - set.size()) * (arr[j].size() - set.size());
            }
        }
        return disName * 2;
    }
};