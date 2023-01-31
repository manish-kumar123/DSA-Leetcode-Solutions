class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* left = head, *right = head;
        ListNode* curr = head;

        int cnt = 0;
        while(curr) {
            if(cnt == k - 1) left = curr;
            curr = curr -> next;
            cnt++;
        }

        int cnt0 = 0;
        while(right) {
            if(cnt0 == cnt - k) {
                swap(left -> val, right -> val);
                return head;
            };
            
            right = right -> next;
            cnt0++;
        }

        return nullptr;
    }
};