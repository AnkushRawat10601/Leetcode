    static int maxCount(const vector<int>& banned_vector, const int n, const int maxSum) {
        set<int> banned;
        for (int b : banned_vector)
            if (b <= n) banned.insert(b);
        
        int sum = 0;
        int ans = 0;
        for (int i = 1; i <= n; ++i) {
            if (sum + i > maxSum) break;
            
            if (banned.count(i)) continue;
            
            sum += i;
            ++ans;
        }
        return ans;
    }