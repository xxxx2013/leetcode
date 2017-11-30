class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector <vector <string>> res;
        vector <int> pos(n , -1);
        solveNQueens(pos,0,res);
        return res;
    }
    void solveNQueens(vector <int>&pos,int row,vector <vector <string>>& res)
    {
        int number = pos.size();
        if(row == number){
            vector <string> out(number,string(number,'.'));
            for(int i=0;i<number;i++)
            {
                out[i][pos[i]] = 'Q';
            }
            res.push_back(out);
            
        }
        else{
            for(int col = 0; col < number;col++)
            {
                if(isValid(pos,row,col))
                {
                    pos[row] = col;
                    solveNQueens(pos,row+1,res);
                    pos[row] = -1;
                }
            }
            
        }
            
    }
    bool isValid(vector <int>&pos,int row,int col)
    {
        for(int i=0;i<row;i++)
        {
            if(col == pos[i] || abs(row - i) == abs(col - pos[i]))
                return false;
        }
        return true;
    }
};