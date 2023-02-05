class Solution {
public:
    int maximumXOR(vector<int>& nums) {
      int y = 0;
for(int x :nums)y = y|x;
return y;  
    }
};