class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int i=0;
        while(!q.empty()){
            int size=q.size();
            int Prev=(i%2==0)?INT_MIN:INT_MAX;
                for(int j=0;j<size;j++){
                    TreeNode*m=q.front();
                    q.pop();
                    int v=m->val;

                    if(i%2==0){
                        if(v%2==0 || v<=Prev){
                            return false;
                        }
                    }
                    if(i%2!=0){
                        if(v%2!=0 || v>=Prev){
                            return false;
                        }
                    }
                    Prev=v;
                    if(m->left){
                        q.push(m->left);
                    }
                    if(m->right){
                        q.push(m->right);
                    }

                }
            
            
            i++;
        }
        return true;
        
    }
};
