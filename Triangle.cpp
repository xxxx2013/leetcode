class Solution {
    /*
    �����Ǽ����i��������ײ����С��ʱ���������֪����i+1��������ײ���С�ĺ͡�
    ��minsum[i][j]=triangle[i]+min( minsum[i+1][j] , minsum[i+1][j+1] )���ӵײ��򶥲������㣬���ܵõ����ս����
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