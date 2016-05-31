class Solution {
    /*
    当我们计算第i层的数到底层的最小和时，如果我们知道第i+1层的数到底层最小的和。
    即minsum[i][j]=triangle[i]+min( minsum[i+1][j] , minsum[i+1][j+1] )；从底层向顶层逐层计算，就能得到最终结果。
    */
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int Min;
        int size = triangle.size();
        
        if(size != triangle[size-1].size())
        {
            return -1;
        }
        
        if(size == 1)
        {
            return triangle[0][0];
        }
        
        vector <int> d(size);
        int i;
        int j;
        for(i = 0;i < size;i++)
        {
            d[i] = triangle[size-1][i];
        }
        
        for(i = size-2;i >= 0;i--)
        {
            for(j = 0;j <= i;j++)
            {
                d[j] = triangle[i][j] + min(d[j],d[j+1]);
            }
        }
        
        return d[0];
    }
};