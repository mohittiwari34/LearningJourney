class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int sum=INT_MIN;
        int v=0;
        int h;
        while(!q.empty()){
            int size=q.size();
            int count=0;
            v++;
            for(int i=0;i<size;i++){
                TreeNode*m=q.front();
                //cout<<m->val;
                q.pop();
                count+=m->val;
                if(m->left){
                    q.push(m->left);
                }
                if(m->right){
                    q.push(m->right);
                }

            }
            
            if(count>sum){
                sum=max(count,sum);
                h=v;
            }
        }
        return h;

        
    }
};
