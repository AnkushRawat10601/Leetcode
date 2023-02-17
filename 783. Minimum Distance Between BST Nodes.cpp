
class Solution {
public:
    priority_queue<int>vals;
    void add(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        vals.push(root->val);
        add(root->left);
        add(root->right);
        return;
    }
    int minDiffInBST(TreeNode* root) 
    {
        add(root);
        int mindiff=INT_MAX,temp=vals.top();
        vals.pop();
        while(!vals.empty())
        {
            mindiff=min(mindiff,abs(temp-vals.top()));
            temp=vals.top();
            vals.pop();
        }
        return mindiff;
    }
};