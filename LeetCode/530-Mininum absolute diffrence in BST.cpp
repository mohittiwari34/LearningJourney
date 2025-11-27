class Solution {
public:
    int minm=INT_MAX;
    TreeNode*prev=nullptr;
    
    int getMinimumDifference(TreeNode* root) {
    
        dfs(root);
        return minm;
    }
    void dfs(TreeNode* root) {
        if (!root) return;
        
        dfs(root->left);

        if (prev) minm = min(minm, abs(root->val - prev->val));
        prev = root;

        dfs(root->right);
    }
    
};
