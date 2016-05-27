class Solution {
    /*
    ¶þ·ÖµÝ¹é×ª»»
    */
public:
    TreeNode *creatTree(vector<int>& nums,int left,int right)
    {
        if(left > right)
        return nullptr;
        
        int mid = (left + right)/2;
        TreeNode *leftnode = creatTree(nums,left,mid-1);
        TreeNode *rightnode = creatTree(nums,mid+1,right);
        
        TreeNode *node = new TreeNode(nums[mid]);
        node -> left = leftnode;
        node -> right = rightnode;
        return node;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
      return  creatTree(nums,0,nums.size()-1);
        
        
    }
};