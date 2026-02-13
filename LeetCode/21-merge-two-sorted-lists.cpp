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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*i;
        ListNode *m=new ListNode(0);
        i=m;
        if(!list1){
            return list2;
        }
        if(!list2){
            return list1;
        }
        while(list1!=NULL && list2!=NULL){
            if(list1->val==list2->val){
                ListNode*x=new ListNode(list2->val);
                ListNode*y=new ListNode(list2->val);
                list1=list1->next;
                list2=list2->next;
                m->next=x;
                m=m->next;
                m->next=y;
                m=m->next;

            }
            else if(list1->val>list2->val){
                ListNode*x=new ListNode(list2->val);
                m->next=x;
                m=m->next;
                list2=list2->next;
            }
            else{
                ListNode*x=new ListNode(list1->val);
                m->next=x;
                m=m->next;
                list1=list1->next;
            }
        }
        m->next=list1?list1:list2;
        i=i->next;
        return i;
    }
};
