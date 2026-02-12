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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*m=new ListNode(0);
        ListNode*x=m;
        int sum=0;
        while(head!=NULL){
            if(head->val==0){
                x->next=new ListNode(sum);
                x=x->next;
                sum=0;
            }
            else{
                sum=sum+head->val;

            }
            head=head->next;
        }
        return m->next->next;
    }
};
