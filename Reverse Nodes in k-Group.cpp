class Solution {
    /*
    �õݹ�����ȽϷ��㣬���ҵ���һ��Ľڵ㣬�ѱ��鷴ת���ٵݹ鴦�����Ľڵ�
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