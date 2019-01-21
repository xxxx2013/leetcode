class Solution {
    //回溯法+去重求解
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<vector<int>> res;
        if(candidates.size()==0)
            return res;
        sort(candidates.begin(),candidates.end());
        vector<int> p;
        combination2(candidates,target,0,p,res);
        return res;
    }
    
    void combination2(vector<int>& candidates, int target, int index, vector<int>&p ,vector<vector<int>>& res)
    {
        
        if(target==0)
        {
            for(int i=0; i<res.size(); i++)
            {
                if(equalvec(p,res[i]))
                {
                    return;
                }
            }
            res.push_back(p);
            return;
        }
        
        if(target<0)
        {
            return;
        }
        
        for(int i=index; i<candidates.size(); i++)
        {
            p.push_back(candidates[i]);
            combination2(candidates,target-candidates[i],i+1,p,res);
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