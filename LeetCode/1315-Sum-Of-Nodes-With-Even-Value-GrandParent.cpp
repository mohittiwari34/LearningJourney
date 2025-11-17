class Solution {
public:
    int sumEvenGrandparent(TreeNode* root) {
        vector<int>v;
        dfs(root,v);
        int m=0;
        for(int c:v){
            m+=c;
        }
        return m;
        


    }
    void dfs(TreeNode* root,vector<int>&v){
        if(root==nullptr) return;
        dfs(root->left,v);
        if(root->val%2==0){
            
            findchild(root,v);
        }
        dfs(root->right,v);
    }
    void findchild(TreeNode*root,vector<int>&v){
        if(root->left){
            if(root->left->left){
                v.push_back(root->left->left->val);
            }
            if(root->left->right){
                v.push_back(root->left->right->val);
            }
        }
        if(root->right){
            if(root->right->left){
                v.push_back(root->right->left->val);
            }
            if(root->right->right){
                v.push_back(root->right->right->val);
            }
        }

    }
};
