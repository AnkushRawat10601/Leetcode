
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
        {
            return root;
        }
        TreeNode* temp;
        temp=root->right;
        root->right=root->left;
        root->left=temp;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};