class Solution {
public:
    Node* construct(vector<vector<int>>& grid) {
        int n = (int) grid.size();
        return build(grid, 0, 0, n);
    }
    
    Node* build(vector<vector<int>>& grid, int i, int j, int n) {
        if(n == 1) return new Node(grid[i][j], true);
        Node* res = new Node(0, false, 
                            build(grid, i, j, n / 2),
                            build(grid, i, j + n / 2, n / 2),
                            build(grid, i + n / 2, j, n / 2),
                            build(grid, i + n / 2, j + n / 2, n / 2));
        if(
            res->topLeft->isLeaf && 
            res->topRight->isLeaf && 
            res->bottomLeft->isLeaf && 
            res->bottomRight->isLeaf && 
            res->topLeft->val == res->topRight->val && 
            res->topLeft->val == res->bottomLeft->val && 
            res->topLeft->val == res->bottomRight->val
        ) {
            res->val = res->topLeft->val;
            res->isLeaf = true;
            delete res->topLeft;
            delete res->topRight;
            delete res->bottomLeft;
            delete res->bottomRight;
            res->topLeft = NULL;
            res->topRight = NULL;
            res->bottomLeft = NULL;
            res->bottomRight = NULL;
        }
        return res;
    }
};
