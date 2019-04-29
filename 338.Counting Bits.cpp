class Solution {
    //动态规划DP memo[i]
public:
    vector<int> countBits(int num) {
        
        vector<int> memo(num+1);
        memo[0] = 0;
        
        vector<int> res;
        res.push_back(memo[0]);
        
        if(num==0)
            return res;
        
        for(int i=1; i<=num; i++)
        {
            if(i%2==0)
            {
                memo[i] = memo[i/2];
            }
            else
            {
                memo[i] = memo[i-1] + 1;
            }
            
            res.push_back(memo[i]);
        }
        return res;
    }
};