class Solution {
public:
    bool isPerfectSquare(int num) {
        int64_t n = num, l = 0, r = n, m = 0;
        while (r - l > 0) {
            m = l + (r - l) / 2;
            if (m * m == n) return true;
            else if (m * m < n) l = m + 1; else r = m - 1;
        }
        return l * l == n;
    }
};