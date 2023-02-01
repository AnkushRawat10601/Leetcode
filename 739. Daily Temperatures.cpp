
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> answer(n, 0);
        for(int i = n - 1; i >= 0; i--){
            int curr = temperatures[i];
            int dist = 0;
            for(int j = i + 1; j < n; ){
                if(curr < temperatures[j]){
                    dist = j - i;
                    break;
                }
                if(answer[j] == 0) break;
                j = j + answer[j];   
            }
            answer[i] = dist;
        }
        return answer;
    }
};