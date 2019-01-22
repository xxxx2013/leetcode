class Solution {
public:
    
    void dfs(int index,vector <int> &a,vector<int> nums,vector<vector<int>> &res)
    {
        res.push_back(a);
        int i;
        
        for(i = index;i < nums.size();i++)
        {
            if(i != index && nums[i] == nums[i-1]) continue;
            a.push_back(nums[i]);
            dfs(i+1,a,nums,res);
            a.pop_back();
        }
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector <vector<int>> res;
        vector <int> a;
        sort(nums.begin(),nums.end());
        dfs(0,a,nums,res);
        
        return res;
        
    }
};

class Solution {
    //非递归方法+去重法
    //我们用last来记录上一个处理的数字，然后判定当前的数字和上面的是否相同，若不同，则循环还是从0到当前子集的个数，若相同，则新子集个数减去之前循环时子集的个数当做起点来循环，这样就不会产生重复了
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>> res(1);
        if(nums.size()==0)
            return res;
        sort(nums.begin(), nums.end());
        int last = nums[0];
        int size = 1;
        for(int i=0; i<nums.size(); i++)
        {
            if(last!=nums[i])
            {
                last = nums[i];
                size = res.size();
            }
            int newsize = res.size();
            for(int j=newsize-size; j<newsize; j++)
            {
                res.push_back(res[j]);
                res.back().push_back(nums[i]);
            }
        }
        
        return res;
    }
};