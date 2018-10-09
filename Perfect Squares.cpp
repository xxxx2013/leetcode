class Solution {
public:
//动态规划求解 res[n+1]一维数组，min(res[a]+1,res[a+b*b]) n=a+b*b
    int numSquares(int n) {
        
        int res[n+1];
        int i;
        for(i=0; i<n+1; i++)
        {
            res[i] = INT_MAX;
        }
        for(i=0; i*i<n+1; i++)
        {
            res[i*i] = 1;
        }
        int j;
        for(i=0; i<n+1; i++)
            for(j=0; i+j*j<n+1; j++)
            {
                res[i+j*j] = min(res[i]+1,res[i+j*j]);
            }
        
        return res[n];
        
    }
};