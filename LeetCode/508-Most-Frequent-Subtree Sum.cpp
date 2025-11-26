 */
class Solution {

public:
    unordered_map<int,int>m;
    vector<int> findFrequentTreeSum(TreeNode* root) {
        m.clear();
        dfs(root);
        vector<int>v;
        int freq=INT_MIN;
        for (auto &i : m) {
            if (i.second > freq) {
                freq = i.second;
                v.clear();
                v.push_back(i.first);
            }
            else if (i.second == freq) {
                v.push_back(i.first);
            }
        }
        return v;
    }
    int dfs(TreeNode* root){
        if(root==nullptr) return 0;
        int left=dfs(root->left);
        int right=dfs(root->right);
        int sum=root->val+left+right;
        m[sum]++;
        return sum;

    }
};
