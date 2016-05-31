class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector <int> res;
        stack <TreeNode *> s;
        TreeNode *p = root;
        
    while(!s.empty() || p != nullptr)

    {        
        while(p != nullptr)
        {
            s.push(p);
            p = p -> left;
        }
        
        if(!s.empty())
        {
            p = s.top();
            s.pop();
            
            res.push_back(p -> val);
            p = p -> right;
        }
        
    }        
        return res;
        
    }
};