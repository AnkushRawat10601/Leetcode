class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> lastIndex;
        int ans = 0, curCount = 0;
        for (int i = 0; i < fruits.size(); i++) {
            lastIndex[fruits[i]] = i;

            if (lastIndex.size() > 2) {
                int out = -1;
                for (auto& [type, _] : lastIndex) {
                    if (type != fruits[i - 1] && type != fruits[i]) {
                        out = type;
                        break;
                    }
                }
                curCount = i - lastIndex[out];
                lastIndex.erase(out);
            }
            else {
                curCount++;
            }
            ans = max(ans, curCount);
        }
        return ans;
    }
};