/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    unordered_map<string,int> s;
    vector<TreeNode*> v;
    string fun(TreeNode* root)
    {
        string r1="",r2="";
        if(root->right!=NULL)
        {
            r2=r2+fun(root->right);
        } 
        if(root->left!=NULL)
        {
            r1=r1+fun(root->left);
        }   
        string r=to_string(root->val)+","+r1+","+r2;
        if(s.find(r)!=s.end())
            {
                if(s[r]==1)
                {
                   v.push_back(root);
                } 
                s[r]++;
            }
            else
            {
                s[r]=1;
            }
        return r;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        string k=fun(root);
        return v;
    }
};
