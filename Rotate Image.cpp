class Solution {
    /*
    矩阵顺时针转90°，不是矩阵转置
    */
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int size = matrix.size();
        
        if(size == 1)
        return;
        
        int i;
        int j;
        int temp;
        for(i = 0;i< size/2;i++)
        {
            for(j = 0;j<size;j++)
            {
                temp = matrix[i][j];
                matrix[i][j] = matrix[size-1-i][j];
                matrix[size-1-i][j] = temp;
            }

        }
       for(i = 0;i<size;i++)
        {
            for(j =i;j<size;j++)
            {
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        
        
    }
};