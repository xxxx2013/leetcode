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


class Solution {
	//huisufa solution
public:
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>> res;
        if(n==0)
            return res;
        
        col = vector(n,false);
        dia1 = vector(2*n-1,false);
        dia2 = vector(2*n-1,false);
        vector<int> p;
        queens(n,0,p,res);
        
        return res;
    }
    
    void queens(int n, int index, vector<int>& p, vector<vector<string>>& res)
    {
        if(index == n)
        {
            vector<string> q(n,string(n,'.'));
            for(int i=0; i<n; i++)
            {
                q[i][p[i]] = 'Q';
            }
            res.push_back(q);
            return;
        }
        
        for(int i=0; i<n; i++)
        {
            if(col[i]==false && dia1[index+i]==false && dia2[i-index+n-1]==false)
            {
                p.push_back(i);
                col[i] = true;
                dia1[index+i] = true;
                dia2[i-index+n-1] = true;
                queens(n,index+1,p,res);
                col[i] = false;
                dia1[index+i] = false;
                dia2[i-index+n-1] = false;
                p.pop_back();
            }
        }
        return;
    }
    
private:
    vector<bool> col;
    vector<bool> dia1;
    vector<bool> dia2;
};