class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> res;
        if(nums.size() < 4)
        return res;
        sort(nums.begin(),nums.end());
        int a,b,c,d;
        for(a = 0; a< nums.size();a++)
        {
            if(a > 0 && nums[a] == nums[a-1])
            continue;
            
            for(b = a + 1; b < nums.size();b++)
            {
                if(b > a + 1 && nums[b] == nums[b-1])
                continue;
                
                c = b + 1;
                d = nums.size() - 1;
                while(c < d)
                {
                    int sum = nums[a] + nums[b] + nums[c] + nums[d];
                    if(sum > target)
                    {
                        d--;
                    }
                    else if(sum < target)
                    {
                        c++;
                    }
                    else if(c > b + 1 && nums[c] == nums[c-1])
                    {
                        c++;
                    }
                    else if(d < nums.size() -1 && nums[d] == nums[d+1])
                    {
                        d--;
                    }
                    else
                    {
                        vector <int> temp;
                        temp.push_back(nums[a]);
                        temp.push_back(nums[b]);
                        temp.push_back(nums[c]);
                        temp.push_back(nums[d]);
                        res.push_back(temp);
                        ++c;
                        --d;
                        
                    }
                }
            }
        }
        return res;
    }
};