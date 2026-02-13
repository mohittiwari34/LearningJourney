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
    ListNode* removeNodes(ListNode* head) {
        vector<int>v;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        int maxi=v[v.size()-1];
        vector<int>m;
        m.push_back(maxi);
        for(int i=v.size()-2;i>=0;i--){
            if(v[i]>=maxi){
                m.push_back(v[i]);
                maxi=max(maxi,v[i]);
            }
        }
        for(int i=0;i<m.size();i++){
            cout<<m[i]<<" ";
        }
        ListNode*u;
        ListNode*s;
        s=new ListNode(m[m.size()-1]);
        u=s;
        for(int i=m.size()-2;i>=0;i--){
            ListNode* x=new ListNode(m[i]);
            s->next=x;
            s=s->next;
        }
        
        return u;
    }
};
