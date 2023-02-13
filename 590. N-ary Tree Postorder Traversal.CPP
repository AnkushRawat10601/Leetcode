class Solution {
public:
    vector<int>ans;
    void solve(Node* &root){
        //base case
        if(root==NULL)return;
        
        //iterate all childrens
        for(auto &it:root->children) 
            solve(it);
        
        ans.push_back(root->val);
        
    }
    vector<int> postorder(Node* root) {
        solve(root);
        return ans;
    }
};