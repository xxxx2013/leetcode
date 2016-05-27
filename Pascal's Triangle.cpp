class Solution {
    /*
    定义法编程
    */
public:
    vector<vector<int>> generate(int numRows) {
        
        vector <vector <int>> res;
        
        int i;
        int j;
        
        for(i = 0;i < numRows;i++)
        {
            vector <int> cur;
            if(i == 0)
            {
                cur.push_back(1);
            }
            else
            {
                for(j = 0; j <= i;j++)
                {
                    if(j == 0 || j == i)
                    {
                        cur.push_back(1);
                    }
                    else
                    {
                        cur.push_back(res[i-1][j] + res[i-1][j-1]);
                    }
                }
            }
            
            res.push_back(cur);
        }
        return res;
    }
};