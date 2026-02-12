/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>v(m,vector<int>(n,-1));
        int top=0;
        int bottom=m-1;
        int left=0;
        int right=n-1;

        while(left<=right && top<=bottom){
            for(int j=left;j<=right &&head!=NULL;j++){
                v[top][j]=head->val;
                head=head->next;
            }
            top++;
            for(int j=top;j<=bottom &&head!=NULL;j++){
                v[j][right]=head->val;
                head=head->next;
            }
            right--;
            for(int j=right;j>=left&&head!=NULL;j--){
                v[bottom][j]=head->val;
                head=head->next;
            }
            bottom--;
            for(int j=bottom;j>=top &&head!=NULL;j--){
                v[j][left]=head->val;
                head=head->next;
            }
            left++;
        }
        return v;

    }
};
