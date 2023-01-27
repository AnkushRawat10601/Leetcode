class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row= mat.size();
        int col= mat[0].size();
        vector<vector<int>> newMat;
        int cnt=0;
        if (row*col != r*c)return mat;
        for (int i=0; i<r; i++){
            vector<int> row_vect;
            for (int j=0; j<c; j++){
                row_vect.push_back(mat[cnt/col][cnt%col]);
                cnt++;
            }
            newMat.push_back(row_vect);
        }
        return newMat;
    }
};