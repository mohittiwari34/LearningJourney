/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        int h = 0;
        bool flag = true;
        height(root, h);
        bfs(root, h, flag);
        return flag;
    }

    void bfs(TreeNode* root, int h, bool &flag) {
        queue<TreeNode*> q;
        q.push(root);
        int k = 0;
        bool allowedchi = true;

        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                TreeNode* m = q.front();
                q.pop();

                if (!allowedchi) {
                    if (m->left || m->right) {
                        flag = false;
                    }
                }

                if (m->left) q.push(m->left);
                if (m->right) q.push(m->right);

                // FIX: apply rules to ALL levels except the last
                if (k < h - 1) {
                    if (m->right && m->left == nullptr) {
                        flag = false;
                    }
                    if (m->left && m->right == nullptr) {
                        allowedchi = false;
                    }
                    if (!m->left && !m->right) {
                        allowedchi = false;
                    }
                }
            }
            k++;
        }
    }

    void height(TreeNode* root, int &h) {
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();

            for (int i = 0; i < size; i++) {
                TreeNode* m = q.front();
                q.pop();

                if (m->left) q.push(m->left);
                if (m->right) q.push(m->right);
            }
            h++;
        }
    }
};
