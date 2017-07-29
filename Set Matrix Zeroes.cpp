class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int i;
        int j;
        
        bool firstrow = false;
        bool firstcol = false;
        
        for(i = 0; i < matrix.size(); i++)
        {
            if(matrix[i][0] == 0)
            {
                firstcol = true;
                break;
            }
        }
        for(j = 0; j < matrix[0].size(); j++)
        {
            if(matrix[0][j] == 0)
            {
                firstrow = true;
                break;
            }
        }
        
        for(i = 1;i < matrix.size(); i++)
        {
            for(j = 1; j < matrix[0].size(); j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                    
                }
            }
        }
        
        for(i = 1;i < matrix.size(); i++)
        {
                for (j = 1; j < matrix[0].size(); j++)
                {
                    if(matrix[0][j] == 0 || matrix[i][0] == 0)
                    {
                        matrix[i][j] = 0;
                    }
                }
            }

        
        
        if(firstcol)
        {
            for(i = 0; i < matrix.size(); i++)
            {
                matrix[i][0] = 0;
            }
        }
        
        if(firstrow)
        {
            for(j = 0; j < matrix[0].size(); j++)
            {
                matrix[0][j] = 0;
            }
        }
    }
};