class Solution {
    //回溯法求解
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<vector<int>> res;
        if(k<0 || n<k)
            return res;
        vector<int> p;
        combination3(k,n,1,p,res);
        return res;
    }
    
    void combination3(int k, int n, int index, vector<int>& p, vector<vector<int>>& res)
    {
        if(p.size()==k && n==0)
        {
            res.push_back(p);
            return;
        }
        
        for(int i=index; i<=9; i++)
        {
            p.push_back(i);
            combination3(k,n-i,i+1,p,res);
            p.pop_back();
        }
        return;
        
    }