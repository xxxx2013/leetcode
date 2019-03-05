class Solution {
    //动态规划memo[A.size()+1][B.size()+1]解决
public:
    int findLength(vector<int>& A, vector<int>& B) {
        
        int res = 0;
        int asize = A.size();
        int bsize = B.size();
        vector<vector<int>> memo(asize+1,vector<int>(bsize+1,0));
        for(int i=asize-1; i>=0; i--)
        {
            for(int j=bsize-1; j>=0; j--)
            {
                if(A[i]==B[j])
                {
                    memo[i][j] = memo[i+1][j+1] + 1;
                    res = max(res,memo[i][j]);
                }
            }
        }
        return res;
    }
};