class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }
        bfs(root,val,depth);
        return root;
    }

    void bfs(TreeNode* root, int val, int depth){
        queue<TreeNode*> q;
        q.push(root);
        int m = 1;

        while(!q.empty()){
            int size = q.size();

            for(int i=0; i<size; i++){
                TreeNode* n = q.front();
                q.pop();

                if(m + 1 == depth){

                    
                    TreeNode* z = new TreeNode(val);
                    z->left = n->left;
                    n->left = z;

                    
                    TreeNode* v = new TreeNode(val);
                    v->right = n->right;
                    n->right = v;
                }
                else{
                    if(n->left) q.push(n->left);
                    if(n->right) q.push(n->right);
                }
            }

            
            if(m + 1 == depth) return;

            m++;
        }
    }
};
