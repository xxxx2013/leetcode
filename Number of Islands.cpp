class Solution {
    //floddfill算法+深度优先搜索算法(dfs算法)
public:
    int numIslands(vector<vector<char>>& grid) {
        
        if(grid.size() == 0)
            return 0;
        m = grid.size();
        n = grid[0].size();
        int res = 0;
        visited = vector<vector<bool>>(m,vector<bool>(n,false));
        
        for(int i=0; i<m; i++)
           for(int j=0; j<n; j++)
           {
               if(grid[i][j]=='1' && visited[i][j]==false)
               {
                   res = res + 1;
                   dfs(grid, i, j);
               }
           }
        
        return res;
    }
    
    void dfs(vector<vector<char>>& grid, int x, int y)
    {
        visited[x][y] = true;
        for(int i=0; i<4; i++)
        {
            int newx = x + d[i][0];
            int newy = y + d[i][1];
            if(inArea(newx,newy) && visited[newx][newy]==false && grid[newx][newy]=='1')
            {
                dfs(grid,newx,newy);
            }
        }
        return;
    }
    
    bool inArea(int x,int y)
    {
        return x>=0 && y>=0 && x<m && y<n;
    }
    
private:
    int d[4][2] = {{0,1},{0,-1},{-1,0},{1,0}};
    int m,n;
    vector<vector<bool>> visited;
};