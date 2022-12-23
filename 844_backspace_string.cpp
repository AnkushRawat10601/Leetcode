class Solution {
public:
    bool backspaceCompare(string S, string T) {
        return get(S) == get(T);
    }
    
    vector<char> get(string s) {
        vector<char> v;
        for(auto c: s)  {
            if(c == '#') {
                if (!v.empty()) v.pop_back();
            } else {
                v.push_back(c);
            }
        }
        return v;
    }
};