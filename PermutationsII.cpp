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