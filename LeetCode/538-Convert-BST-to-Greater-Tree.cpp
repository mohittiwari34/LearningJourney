class Solution {
public:
    TreeNode* convertBST(TreeNode* root) {
        int sum=0;
        dfs(root,sum);
        return root;
    }
    void dfs(TreeNode* root,int&sum){
        if(root==nullptr) return;
        dfs(root->right,sum);
        sum+=root->val;
        root->val=sum;
        dfs(root->left,sum);
    }
};
