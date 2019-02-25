class Solution {
    //递归回溯算法 dfs
public:
    bool exist(vector<vector<char>>& board, string word) {
        
        n = board.size();
        if(n==0)
            return false;
        m = board[0].size();
        if(m==0)
            return false;
        visited = vector(n,vector(m,false));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(dfs(board,i,j,word,0)==true)
                {
                    return true;
                }
            }
        }
        
        return false;
    }
    
    bool dfs(vector<vector<char>>& board,int x,int y,string& word,int index)
    {
        if(index == word.size()-1)
        {
            if(word[index]==board[x][y])
                return true;
            else
                return false;
        }
        
        if(word[index]==board[x][y])
        {
            visited[x][y]=true;
            for(int i=0; i<4; i++)
            {
                int newx = x + d[i][0];
                int newy = y + d[i][1];
                if(inArea(newx,newy) && !visited[newx][newy])
                {
                    if(dfs(board,newx,newy,word,index+1)==true)
                        return true;
                }
            }
            visited[x][y]=false;
        }
        
        return false;
    }
    
    bool inArea(int x,int y)
    {
        if(x>=0 && x<n && y>=0 && y<m)
            return true;
        return false;
    }
    
    
private:
    vector<vector<bool>> visited;
    int n,m;
    int d[4][2] = {{-1,0},{1,0},{0,1},{0,-1}};
};