class Solution {
public:
    vector<vector<int>>v;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>b;
        int s=0;
        dfs(root,b,s,targetSum);
        return v;
    }
    void dfs(TreeNode*root,vector<int>&b,int s,int targetSum){
        if(root==nullptr) return;
        s+=root->val;
        b.push_back(root->val);
        if(root->left==nullptr&&root->right==nullptr){
            if(s==targetSum){
                v.push_back(b);
            }
        }
        else{
        dfs(root->left,b,s,targetSum);
        dfs(root->right,b,s,targetSum);
        }
        b.pop_back();
    }
};
