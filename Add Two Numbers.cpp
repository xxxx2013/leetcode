class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (l1 == nullptr)
        return l2;
        if (l2 == nullptr)
        return l1;
      
        int n = 0;
        ListNode *t = new ListNode(0);
        ListNode *sptr = t;
        
        while (l1 != nullptr || l2 != nullptr)
        {
            int val1 = 0;
            int val2 = 0;
            if(l1 != nullptr)
            {
                val1 = l1 -> val;
                l1 = l1 -> next;
            }
            if(l2 != nullptr)
            {
                val2 = l2 -> val;
                l2 = l2 -> next;
            }
            int tmp = val1 + val2 + n;
            sptr -> next = new ListNode(tmp%10);
            n = tmp/10;
            sptr = sptr -> next;
            
        }
        if (n == 1)
        {
            sptr -> next = new ListNode(1);
            
        }
        return t -> next;
    }
};