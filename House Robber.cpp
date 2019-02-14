class Solution {
    //动态规划方法 规划[0....index]里面的数据(index<=n-1)
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        
        int n = nums.size();
        vector<int> memo(n,0);
        memo[0] = nums[0];
        for(int i=1; i<n; i++)
        {
            for(int j=i; j>=0; j--)
            {
                memo[i] = max(memo[i],nums[j]+(j-2>=0?memo[j-2]:0));
            }
        }
        return memo[n-1];
    }
};

class Solution {
    //动态规划方法2 规划[0....index]里面的数据(index<=n-1)
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        
        int n = nums.size();
        vector<int> memo(n,0);
        memo[0] = nums[0];
        for(int i=1; i<n; i++)
        {
            memo[i] = max(memo[i-1],nums[i]+(i-2>=0?memo[i-2]:0));
        } 
        return memo[n-1];
    }
};