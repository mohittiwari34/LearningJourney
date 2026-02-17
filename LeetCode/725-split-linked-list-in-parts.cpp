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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int size=0;
        ListNode* m=head;
        while(m!=nullptr){
            size++;
            m=m->next;
        }
        int extra=size%k;
        int part=size/k;
        m=head;
        vector<ListNode*>ans;
        for(int i=0;i<k;i++){
            if(!m){
                ans.push_back(nullptr);
                continue;
            }
            ans.push_back(m);
            int currsize=part+(extra>0?1:0);
            extra--;
            for(int i=1;i<currsize;i++){
                m=m->next;
            }
            ListNode*nextpar=m->next;
            m->next=nullptr;
            m=nextpar;
        }
        return ans;
        

        
        
    }
};
