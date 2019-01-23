class Solution {
    //floodfill算法+深度优先搜索算法(DFS算法)求解
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        if(grid.size()==0)
            return 0;
        
        m = grid.size();
        n = grid[0].size();
        
        visited = vector<vector<bool>>(m,vector<bool>(n,false));
        //marea = 45;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[i][j]==1 && visited[i][j]==false)
                {
                    marea = 1;
                    dfs(grid,i,j);
                    area.push_back(marea);
                    
                }
            }
        }
        
        if(area.size()==0)
            return 0;
        
        sort(area.begin(),area.end());
        
        return area[area.size()-1];
        //return marea;
    }
    
    void dfs(vector<vector<int>>& grid,int x,int y)
    {
        visited[x][y] = true;
        for(int i=0; i<4; i++)
        {
            int new_x = x + move[i][0];
            int new_y = y + move[i][1];
            if(inArea(new_x,new_y) && visited[new_x][new_y]==false && grid[new_x][new_y]==1)
            {
                marea = marea + 1;
                dfs(grid,new_x,new_y);
            }
        }
    }
    
    bool inArea(int x,int y)
    {
        return x>=0 && y>=0 && x<m && y<n;
    }
    
private:
    vector<int> area;
    int marea=0;
    int m;
    int n;
    vector<vector<bool>> visited;
    int move[4][2] = {{0,-1},{0,1},{-1,0},{1,0}};
    
};