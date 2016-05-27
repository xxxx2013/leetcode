class Solution {
    /*
    （1）根据题述：左孩子为空，则右孩子一定为空，所以左孩子为空，则return
    （2）如果左孩子不为空，则右孩子一定不为空，所以链接左孩子和右孩子即可（左孩子的next赋值为右孩子）
    （3）由于先序遍历，所以父节点的next比子节点的next先被设置，故父节点不同的两个子节点进行连接，就可以用到父节点的next，整题的精华便是：cur->left->next = cur->right
    */
public:
    void connect(TreeLinkNode *root) {
        
        if(root == nullptr)
        return;
        
        TreeLinkNode *cur;
        while(root -> left != nullptr)
        {
            cur = root;
            while(cur != nullptr)
            {
                cur -> left -> next = cur -> right;
                if(cur -> next != nullptr)
                {
                    cur -> right -> next = cur -> next -> left;
                }
                
                cur = cur -> next;
            }
            
            root = root -> left;
        }
    
    }
};