class Solution {
public:
    
    int Dfs(TreeNode* root,long long currentsum, int targetSum,unordered_map<long long,int>&m){
        if(root==nullptr) return 0;
       
        currentsum+=root->val;
         int count=0;
        if(m.count(currentsum-targetSum)){
            count+=m[currentsum-targetSum];
        }
        m[currentsum]++;

        
        count+=Dfs(root->left,currentsum,targetSum,m);
        count+=Dfs(root->right,currentsum,targetSum,m);
        m[currentsum]--;
        return count;


    }
    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<long long,int>m;
        m[0]=1;
        return Dfs(root,0,targetSum,m);
    }
};
