
class Solution{
    public:
        vector<int> inorderTraversal(TreeNode* root){
            vector<int> nodes;
            inorder(root, nodes);
            return nodes;
        }
    
    private:
        void inorder(TreeNode* root,vector<int>& nodes){
            if(root == NULL) return ;

            inorder(root->left, nodes);
            nodes.push_back(root-> val);
            inorder(root->right, nodes);

        }
};