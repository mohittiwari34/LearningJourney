class Solution {
public:
    int maxi=0;
    int maxAncestorDiff(TreeNode* root) {
        return helper(root,root->val,root->val);
    
    }
    int helper(TreeNode* root,int maxv,int minv){
        if(root==nullptr) return maxv-minv;
        maxv=max(root->val,maxv);
        minv=min(root->val,minv);
        int maxdiffle=helper(root->left,maxv,minv);
        int maxdiffri=helper(root->right,maxv,minv);
        return  max(maxdiffle,maxdiffri); 
         }                         
    
};
