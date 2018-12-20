class Solution {
    /*
    这里的几点都是单向节点，所以要注意的一点是一旦是把A和B交换了以后，A的父节点就指向了B。这个是容易忘记的一点。
    */
public:
    ListNode* swapPairs(ListNode* head) {
        
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
            return head;
        
        ListNode* dummy = new ListNode(NULL);
        dummy->next = head;
        ListNode* fast;
        ListNode* slow = dummy->next;
        ListNode* temp = dummy->next;

        while(slow!=NULL && slow->next!=NULL)
        {
            fast = slow->next;
            slow->next = fast->next;
            fast->next = slow;
            
            if(temp!=dummy->next)
            {
                temp->next = fast;
            }
            else
            {
                dummy->next = fast;
            }
            temp = slow;
            slow = slow->next;
        }
        return dummy->next;
    }
};