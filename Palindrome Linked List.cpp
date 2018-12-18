/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    //快慢指针fast、slow方法实现O(1)空间复杂度
public:
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL)
            return true;
        if(head->next==NULL)
            return true;
        
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(fast!=NULL&&fast->next!=NULL)
        {
            
            if(fast->next->next==NULL)
            {
                if(fast->next->val!=slow->val)
                {
                    return false;
                }
                ListNode* delNode = fast->next;
                fast->next = delNode->next;
                delete delNode;
                fast = slow->next;
                slow = slow->next;
            }
            else
            {
                fast = fast->next;
            }
        }
        return true;
    }
};