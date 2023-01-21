class Solution {
public:
    vector<vector<int>> ans;
    vector<int> val;
    int n;

    void solve(vector<int> &a, int id) {
        ans.push_back(a);
        for(int i=id; i<n; i++) {
            a.push_back(val[i]);
            solve(a, i+1);
            a.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        n = nums.size();
        for(auto x: nums) val.push_back(x);
        vector<int> a;
        solve(a, 0);
        return ans;
    }
};