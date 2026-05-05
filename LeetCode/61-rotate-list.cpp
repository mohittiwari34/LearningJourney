class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        vector<int> v;

        
        ListNode* temp = head;
        while (temp) {
            v.push_back(temp->val);
            temp = temp->next;
        }

        int n = v.size();
        k = k % n;

        
        reverse(v.begin(), v.end());
        reverse(v.begin(), v.begin() + k);
        reverse(v.begin() + k, v.end());

        
        temp = head;
        for (int i = 0; i < n; i++) {
            temp->val = v[i];
            temp = temp->next;
        }

        return head;
    }
};
