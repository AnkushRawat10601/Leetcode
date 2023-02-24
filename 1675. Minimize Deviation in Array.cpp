class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int>pq;
        int mini = INT_MAX;
        for(auto num : nums){
            if(num%2) num*=2;
            pq.push(num);
            mini = min(mini,num);
        }
        int minDev = INT_MAX;
        while(1){
            int maxVal = pq.top();
            pq.pop();
            minDev = min(maxVal-mini,minDev);
            if(maxVal%2) break;
            maxVal/=2;
            mini = min(mini,maxVal);
            pq.push(maxVal);
        }
        return minDev;
    }
};
