class Solution {
    /*
    ����ļ��㶼�ǵ���ڵ㣬����Ҫע���һ����һ���ǰ�A��B�������Ժ�A�ĸ��ڵ��ָ����B��������������ǵ�һ�㡣
    */
public:
    ListNode* swapPairs(ListNode* head) {
        
        if(head == NULL || head -> next == NULL)
        {
            return head;
        }
        
        ListNode *p1,*p2;
        ListNode *temp;
        p1 = head;
        temp = head;
        while(p1 != NULL && p1 -> next != NULL)
        {
            p2 = p1 -> next;
            p1 -> next = p2 -> next;
            p2 -> next = p1;
            
            if(temp != head)
            {
                temp -> next = p2;
            }
            else
            {
                head = p2;
            }
            
            temp = p1;
            p1 = p1 -> next;
            
        }
        
        return head;
    }
};