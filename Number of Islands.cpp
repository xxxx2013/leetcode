class Solution {
    //floddfill算法+深度优先搜索算法(dfs算法)
public:
    int numIslands(vector<vector<char>>& grid) {
        
        if(grid.size()==0)
            return 0;
        m = grid.size();
        n = grid[0].size();
        
        int res = 0;
        
        visited = vector<vector<bool>>(m,vector<bool>(n,false));
        
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[i][j]=='1' && visited[i][j]==false)
                {
                    res = res + 1;
                    dfs(grid,i,j);
                }
            }
        }
        
        return res;
    }
    
    void dfs(vector<vector<char>>& grid, int x, int y)
    {
        visited[x][y] = true;
        for(int i=0; i<4; i++)
        {
            int new_x = x + move[i][0];
            int new_y = y + move[i][1];
            if(inArea(new_x,new_y) && visited[new_x][new_y]==false && grid[new_x][new_y]=='1')
            {
                dfs(grid,new_x,new_y);
                
            }
        }
    }
    
    bool inArea(int x,int y)
    {
        return x>=0 && y>=0 && x<m && y<n;
    }
    
private:
    
    int m;
    int n;
    vector<vector<bool>> visited;
    int move[4][2] = {{0,-1},{0,1},{-1,0},{1,0}};