class Solution {
    //递归回溯+去重方法求解
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> res;
        if(candidates.size()==0)
            return res;
        vector<int> p;
        sort(candidates.begin(), candidates.end());
        combination(target,candidates,p,res);
        return res;
    }
    
    void combination(int target, vector<int>& candidates, vector<int>& p, vector<vector<int>>& res)
    {
        if(target == 0)
        {
            
            vector<int> q = p;
            sort(q.begin(),q .end());
            for(int i=0; i<res.size(); i++)
            {
                if(true==equalvec(q,res[i]))
                {
                    return;                    
                }
            }
            res.push_back(p);
            return;

        }
        if(target < 0)
        {
            //p.clear();
            return;
        }
        
        for(int i=0; i<candidates.size(); i++)
        {
            p.push_back(candidates[i]);
            if(target-candidates[i]>=0)
            {
                combination(target-candidates[i],candidates,p,res);
            }
            p.pop_back();
        }
        return;
    }
    bool equalvec(vector<int>& p, vector<int>& res)
    {
        if(p.size()!=res.size())
        {
            return false;
        }
        for(int i=0; i<res.size(); i++)
        {
            if(p[i]!=res[i])
                return false;
        }
        return true;
    }
};