class Solution {
public:
    int rob(TreeNode* root) {
        vector<int>v=travel(root);
        return max(v[0],v[1]);
    }
    vector<int>travel(TreeNode* root){
        if(!root){
            return vector<int>(2,0);
        }
        vector<int>left=travel(root->left);
        vector<int>right=travel(root->right);
        vector<int>option(2);
        option[0]=root->val+left[1]+right[1];
        option[1]=max(left[0],left[1])+max(right[1],right[0]);
        return option;
    }
};
