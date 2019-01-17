class Solution {
public:
    void dfs(vector<int> &nums , int index, vector<int> &perm, vector<vector<int> > &res)
    {
        int size = nums.size();
        if(size == index)
        {
            res.push_back(perm);
        }
        else
        {
            int i;
            for(i = index;i < size;i++)
            {
                if((i > index) && (nums[i] == nums[index]))
                    continue;
                    else
                    {
                        swap(nums[index],nums[i]);
                    }
                perm.push_back(nums[index]);
                dfs(nums, index + 1, perm, res);
                perm.pop_back();
            }
            sort(nums.begin() + index, nums.end());
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        vector <vector<int>> res;
        int size = nums.size();
        sort(nums.begin(),nums.end());
        vector <int> perm;
        dfs(nums, 0, perm, res);
        return res;
        
        
    }
};


class Solution {
    //回溯递归法+判断数组是否重复
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        vector<vector<int>> res;
        if(nums.size()==0)
            return res;
        
        vector<int> p;
        mrepeat = false;
        for(int i=0; i<nums.size(); i++)
        {
            used.push_back(false);
        }
        sort(nums.begin(),nums.end());
        permutation(nums,0,p,res);
        return res;
        
    }
    
    void permutation(vector<int>& nums,int index,vector<int>& p,vector<vector<int>>& res)
    {
        if(index==nums.size())
        {
            for(int i=0; i<res.size(); i++)
            {
                mrepeat = equalvec(p,res[i]);
                if(mrepeat == true)
                {
                    //res.push_back(p);
                    return;
                }
            }
            res.push_back(p);
            return;
        }
        
        for(int i=0; i<nums.size(); i++)
        {
            if(used[i]==false)
            {
                p.push_back(nums[i]);
                used[i] = true;
                permutation(nums,index+1,p,res);
                used[i] = false;
                p.pop_back();
            }
        }
         
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

private:
    
    vector<bool> used;
    bool mrepeat;
    
};