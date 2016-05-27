class Solution {
    /*
    从右上角元素开始遍历，每次遍历中若与target相等则返回true；若小于则行向下移动；若大于则列向左移动。时间复杂度m+n。
    */
    
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int i = matrix.size() - 1;
        int j = 0;
      //  int m = matrix.size();
        int n = matrix[0].size();
        
        while(i >= 0 && j < n)
        {
            if(matrix[i][j] == target)
            {
                return true;
            }
            
            else if(matrix[i][j] < target)
            {
                j++;
            }
            
            else
            {
                i--;
            }
        }
        return false;
    }
};