class Solution {
    /*
    用递归做会比较方便，先找到下一组的节点，把本组反转后再递归处理后面的节点
    */
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head == NULL || head -> next ==NULL || k ==1)
        return head;
        
        ListNode *l1 = head;
        int i;
        
        for(i = 0;i < k; i++)
        {
            if(l1)
            l1 = l1 -> next;
            else
            return head;
        }
        
        ListNode *Pre = nullptr;
        ListNode *Cur = head;
        ListNode *Go = nullptr;
        
        while(Cur != l1)
        {
            Go = Cur -> next;
            if(Pre)
            {
                Cur -> next = Pre;
            }
            else
            {
                Cur -> next = reverseKGroup(l1,k);
            }
            
            Pre = Cur;
            Cur = Go;
        }
        
        return Pre;
        
    }
};