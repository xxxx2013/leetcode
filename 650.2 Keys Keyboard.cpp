class Solution {
    //动态规划DP memo[i]
public:
    int minSteps(int n) {
        
        if(n==1)
            return 0;
        
        vector<int> memo(n+1,0);
        
        memo[1] = 0;
        
        for(int i=2; i<=n; i++)
        {
            memo[i] = i;
        }
        
        for(int i=2; i<=n; i++)
        {
            for(int j=i-1; j>=2; j--)
            {
                if(i%j==0)
                {
                    memo[i] = min(memo[i],memo[j]+(i/j));
                    //break;
                }
            }
        }
        
        return memo[n];
    }
};