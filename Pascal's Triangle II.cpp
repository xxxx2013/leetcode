class Solution {
    /*
    对于产生一个新的行用从后往前的方法来更新，这样就只需一个O(k)的空间
    */
public:
    vector<int> getRow(int rowIndex) {
        
        vector <int> res(rowIndex+1);
        int i;
        int j;
        
        res[0] = 1;
        
        for(i = 1;i <= rowIndex;i++)
        {
            for(j = i; j > 0;j--)
            {
                if(j == i)
                {
                    res[j] = 1;
                }
                else if(j == 0)
                {
                    res[j] = 1;
                }
                else
                {
                    res[j] = res[j] + res[j-1];
                }
            }
        }
        return res;
    }
};