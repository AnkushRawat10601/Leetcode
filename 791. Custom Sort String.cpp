class Solution {
public:
    string customSortString(string order, string s) {
        map<int,char> mp;int ind = 0;
        for(auto i:order) mp[ind++]=i;
        unordered_map<char,int> mp1;
        for(auto &i:s) mp1[i]++;
        string ans = "";
        for(auto &i:mp){
            while(mp1[i.second]>0){
                ans+=i.second;
                mp1[i.second]--;
            }
        }
        for(auto &i:mp1){
            while(i.second>0){
                ans+=i.first;
                i.second--;
            }
        }
        return ans;
    }
};