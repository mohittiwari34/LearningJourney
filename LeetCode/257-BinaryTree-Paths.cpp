class Solution {
public:
    vector<string>v;
    vector<string> binaryTreePaths(TreeNode* root) {
        string s="";
        dfs(root,s);
        cout<<s;
        
        return v;
    }
    void dfs(TreeNode*root,string s){
        if(root==nullptr) return;
        s=s+to_string(root->val);
        if(root->left==nullptr && root->right==nullptr){
            v.push_back(s);
        }
        s+="->";
        dfs(root->left,s);
        dfs(root->right,s);
        
        
    }
};
