class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == nullptr || head -> next == nullptr)
        return head;
        
        ListNode *plist = head;
        
        while(plist -> next != nullptr && plist -> val == plist -> next -> val)
        {
            plist = plist -> next;
        }
        
        if(plist != head)
        {
            while(head != plist -> next)
            {
                ListNode *temp = head;
                head = head -> next;
                free(temp);
            }
            
            return deleteDuplicates(plist -> next);
        }
        head -> next = deleteDuplicates(head -> next);
        return head;
    }
};