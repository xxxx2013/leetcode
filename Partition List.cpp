class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        
        if(head == NULL)
        return NULL;
        
        if(head -> next == NULL)
        return head;
        
        ListNode *sl = new ListNode(0);
        ListNode *ll = new ListNode(0);
        
        ListNode *small_list = sl;
        ListNode *large_list = ll;
        
        ListNode *list = head;
        while(list)
        {
            if(list -> val < x)
            {
                small_list -> next = list;
                small_list = small_list -> next;
            }
            else
            {
                large_list -> next = list;
                large_list = large_list -> next;
            }
            
            list = list -> next;
            small_list -> next = large_list -> next = NULL;
        }
        small_list -> next = ll -> next;
        return sl -> next;
        
    }
};