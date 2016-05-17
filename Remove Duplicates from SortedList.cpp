class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == nullptr || head -> next == nullptr)
        return head;
        
        ListNode *res = head;
        while(res != nullptr && res -> next != nullptr)
        {
            if(res -> val == res -> next -> val)
            {
                res ->next = res -> next -> next;
            }
            else
            {
                res = res -> next;
            }
        }
        
        return head;
    }
};