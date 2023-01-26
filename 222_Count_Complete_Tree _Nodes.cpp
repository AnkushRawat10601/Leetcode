class Solution {
public:
    int countNodes(TreeNode* root) {
        return !root ? 0 : 1 + countNodes(root->left) + countNodes(root->right);
    }
};