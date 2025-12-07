class Solution {
public:
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(root==nullptr) return v;
        bfs(root,v);
        return v;
    }
    void bfs(TreeNode* root,vector<vector<int>>&v){
        queue<TreeNode*>q;
        q.push(root);
        bool leftToRight = true;
        while(!q.empty()){
            
            int size=q.size();
            vector<int>b;
            for(int i=0;i<size;i++){
                TreeNode* m=q.front();
                q.pop();
                // int index=leftToRight?i:(size-i-1);
                // b[index]=m->val;
                b.push_back(m->val);
                if(m->left){
                    q.push(m->left);
                }
                if(m->right){
                    q.push(m->right);
                }
                
            }
            if(!leftToRight){
                reverse(b.begin(),b.end());
            }
            v.push_back(b);
            leftToRight=!leftToRight;
        }
    }
};
