class Solution {
public:
    
    void gener(vector<string> &res,string cur,int m,int n)
    {
        if(m == 0 & n == 0)
        return res.push_back(cur);
        else
        {
            if(m != 0)
            {
                gener(res,cur + "(",m - 1,n);
            }
            if(m < n && n != 0)
            {
                gener(res,cur + ")",m,n-1);
            }
        }
    }
    
    vector<string> generateParenthesis(int n) {
        
        
        vector <string> res;
        int i;
        if(n > 0)
        {
            gener(res,string(),n,n);
        }
        
        return res;
        
    }
};