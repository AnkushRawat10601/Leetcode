
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);

        if(root==NULL)
        return ans;

        while(1){

            int size=q.size();
if(size==0)
return ans;
int data=0;
while(size>0){
TreeNode* temp =q.front();
q.pop();
data=temp->val;

if(temp->left !=NULL)
q.push(temp->left);

if(temp->right!=NULL)
q.push(temp->right);

size--;
}
ans.push_back(data);
        }
   return ans;
    }
};