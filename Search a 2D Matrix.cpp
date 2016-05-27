class Solution {
    /*
    �����Ͻ�Ԫ�ؿ�ʼ������ÿ�α���������target����򷵻�true����С�����������ƶ������������������ƶ���ʱ�临�Ӷ�m+n��
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