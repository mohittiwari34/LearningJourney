class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        unordered_map<int,int>k;
        
        return bfs(root,x,y,k);
    }
    bool bfs(TreeNode* root, int x, int y,unordered_map<int,int>&k){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            bool a=false;
            bool b=false;
            for(int i=0;i<size;i++){
                TreeNode*m=q.front();
                q.pop();
                if(m->left){
                    if(m->left->val==x){
                        k[x]=m->val;
                        a=true;
                    }
                    if(m->left->val==y){
                        k[y]=m->val;
                        b=true;
                    }
                    q.push(m->left);
                }
                if(m->right){
                    if(m->right->val==x){
                        k[x]=m->val;
                        a=true;
                    }
                    if(m->right->val==y){
                        k[y]=m->val;
                        b=true;
                    }
                    q.push(m->right);
                }


            }
            if ((a && !b) || (!a && b)) return false;
            if (a && b) return k[x] != k[y];
            
        }
        return false;
    }
};
