/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    //��������ָ�롢����������������ȡ�ע��K���������ȵ�����
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
            return head;
        
        ListNode* cur = head;
        int n = 0;
        while(cur!=NULL)
        {
            n++;
            cur = cur->next;
        }
        k = k%n;
        ListNode* fast = head;
        ListNode* slow = head;
        for(int i=0; i<k; i++)
        {
            if(fast!=NULL)
                fast = fast->next;
        }
        
        while(fast->next!=NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        fast->next = head;
        fast = slow->next;
        slow->next = NULL;
        return fast;
        
    }
};