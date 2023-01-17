class Solution {
public:
	vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
		vector<vector<int>>v(grid.size(), vector<int>(grid[0].size(), 0));
		unordered_map<int, int>m1, m2;
		for(int i=0; i<grid.size(); i++){
			for(int j=0; j<grid[0].size(); j++){
				if(grid[i][j]==1){
					m1[i]++;
					m2[j]++;
				}
			}
		}
		for(int i=0; i<grid.size(); i++){
			for(int j=0; j<grid[0].size(); j++){
				v[i][j]=m1[i]+m2[j]-(grid.size()-m1[i]+grid[0].size()-m2[j]);
			}
		}
		return v;
	}
};