class Solution {
public:
    int countNodes(TreeNode* root) {
        int count=0;
        if(root==nullptr) return 0;
        bfs(root,count);
        
        int count=0;
    }
    void bfs(TreeNode* root,int&count){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            count+=size;
            for(int i=0;i<size;i++){
                TreeNode*m=q.front();
                q.pop();
                if(m->left){
                    q.push(m->left);
                }
                if(m->right){
                    q.push(m->right);
                }
            }
        }
    }
};
