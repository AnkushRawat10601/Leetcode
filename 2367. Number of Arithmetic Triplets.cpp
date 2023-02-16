class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        
        int cnt = 0;
        
        unordered_map<int,bool> mp;
        
        // Mark every elem presence in map.
        for(int i=0;i<nums.size();i++)
            mp[nums[i]] = true;
        
        
        // For every element say 'elm' check if there exist both numbers, (elm + diff) and (elm - diff) inside map. If yes then increment cnt
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]-diff] && mp[nums[i]+diff])
                cnt++;
        }
        
		
		// Happy return :)
        return cnt;
    }
};