class Solution {
public:
	int maxProduct(vector<int>& nums) {
		int lpos = 1;
		int lneg = 1;
		int res = nums[0];
		for (auto i : nums) {
			res = (i<0) ? max(lneg*i, res) : max(lpos*i, res);
			if (i > 0) {
				lpos = max(lpos*i, 1);
				lneg = (lneg<0)? lneg*i:1;
			}
			else {
				int temp = lpos;
				lpos = max(lneg*i, 1);
				lneg = temp*i;
			}
			
		}
		return res;
	}
};