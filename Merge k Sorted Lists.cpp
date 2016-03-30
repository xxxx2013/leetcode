class Solution {
    /*
    分治法，合并的时间复杂度O(logN)，不用递归，空间复杂度O(1) 
    */
public:
        ListNode* mergeLists(ListNode *l1,ListNode *l2)
        {
            if(l1 == nullptr)
            return l2;
            if(l2 == nullptr)
            return l1;
            ListNode *mergelist;
            if(l1 -> val > l2 -> val)
            {
                mergelist  = l2;
                mergelist -> next = mergeLists(l1,l2 -> next);
            }
            else
            {
                mergelist = l1;
                mergelist -> next = mergeLists(l1 -> next,l2);
            }
            return mergelist;
        }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        int size = lists.size();
        if(size == 0)
        return NULL;
        while(size > 1)
        {
            int k = (size + 1)/2;
            for(int i = 0;i < size/2; i++)
            {
                lists[i] = mergeLists(lists[i],lists[i+k]);
            }
            size = k;
        }
        
        return lists[0];
        
    }
};