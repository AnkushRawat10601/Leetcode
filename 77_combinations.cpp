class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> ans;
        solve(1, n, k, ans, res);
        return res;
    }

    void solve(int i, int n, int k, vector<int> &ans, vector<vector<int>> &res) {
        if(ans.size() == k) {
            res.push_back(ans);
            return;
        }
        for(int j = i; j <= n; j++) {
            ans.push_back(j);
            solve(j + 1, n, k, ans, res);
            ans.pop_back();
        }
    }
};