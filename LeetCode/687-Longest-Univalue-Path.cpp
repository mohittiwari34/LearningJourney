class Solution {
public:
    
    int longestUnivaluePath(TreeNode* root) {
        int ans=0;
        dfs(root,ans);
        return ans;
        
    }
    int dfs(TreeNode*root,int &ans){
        if(root==nullptr) return 0;
        int left=dfs(root->left,ans);
        int right=dfs(root->right,ans);
        int leftpath=0;
        int rightpath=0;
        if(root->left && root->left->val==root->val){
            leftpath=left+1;
        }
        if(root->right && root->right->val==root->val){
            rightpath=right+1;
        }
        ans=max(ans,leftpath+rightpath);
        return max(rightpath,leftpath);

    }
};
