class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>v;
        if(root==nullptr) return v;

        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>a;
            for(int i=0;i<size;i++){
                TreeNode*m=q.front();
                q.pop();

                a.push_back(m->val);
                if(m->left){
                    q.push(m->left);
                }
                if(m->right){
                    q.push(m->right);
                }

            }
            v.insert(v.begin(),a);
        }
        //reverse(v.begin(),v.end());
        return v;
        
    }
};
