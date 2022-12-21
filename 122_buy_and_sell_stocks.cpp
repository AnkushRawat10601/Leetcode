class Solution {
public:
        int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;
        int maxHas = -prices[0], maxNotHas = 0;
        for (int i = 1; i < prices.size(); ++i) {
            maxHas = max(maxHas, maxNotHas - prices[i]);
            maxNotHas = max(maxNotHas, maxHas + prices[i]);
        }
        return max (maxHas, maxNotHas);
    }
};