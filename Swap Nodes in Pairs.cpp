class Solution {
    /*
    这里的几点都是单向节点，所以要注意的一点是一旦是把A和B交换了以后，A的父节点就指向了B。这个是容易忘记的一点。
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