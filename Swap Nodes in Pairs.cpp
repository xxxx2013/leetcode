class Solution {
    /*
    ����ļ��㶼�ǵ���ڵ㣬����Ҫע���һ����һ���ǰ�A��B�������Ժ�A�ĸ��ڵ��ָ����B��������������ǵ�һ�㡣
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