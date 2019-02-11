class Solution {
public:
//动态规划求解 res[n+1]一维数组，min(res[a]+1,res[a+b*b]) n=a+b*b
    int numSquares(int n) {
        
        int res[n+1];
        int i;
        for(i=0; i<n+1; i++)
        {
            res[i] = INT_MAX;
        }
        for(i=0; i*i<n+1; i++)
        {
            res[i*i] = 1;
        }
        int j;
        for(i=0; i<n+1; i++)
            for(j=0; i+j*j<n+1; j++)
            {
                res[i+j*j] = min(res[i]+1,res[i+j*j]);
            }
        
        return res[n];
        
    }
};

class Solution {
    //广度优先搜索(BFS)和图的最短路径方法
public:
    int numSquares(int n) {
        
        queue <pair<int,int>> q;
        q.push(make_pair(n,0));
        vector <bool> visited(n+1,false);
        visited[n] = true;
        
        while(q.empty()==false)
        {
            int num = q.front().first;
            int step = q.front().second;
            q.pop();
            
            for(int i=0; num-i*i>=0; i++)
            {
                if(num-i*i==0)
                    return step+1;
                
                if(visited[num-i*i] == false)
                {
                    q.push(make_pair(num-i*i,step+1));
                    visited[num-i*i] = true;
                }
                
            }
        }
     
        return 1;
    }
};

class Solution {
    //队列与图方法求解
public:
    int numSquares(int n) {
        
        if(n==0)
            return 0;
        queue<pair<int,int>> q;
        q.push(make_pair(n,0));
        vector<bool> visited(n+1,false);
        visited[n] = true;
        
        while(q.empty()==false)
        {
            int num = q.front().first;
            int step = q.front().second;
            q.pop();
            if(num==0)
                return step;
            
            for(int i=1; num-i*i>=0; i++)
            {
                if(visited[num-i*i]==false)
                {
                    q.push(make_pair(num-i*i,step+1));
                    visited[num-i*i] = true;
                }
            }
        }
        return 1;
    }
    
};

class Solution {
    //动态规划求解2
public:
    int numSquares(int n) {
        
        vector <int> memo(n+1,n+1);
        
        for(int i=1; i*i<=n; i++)
        {
            memo[i*i] = 1;
        }
        
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j*j+i<=n; j++)
            {
                memo[i+j*j] = min(memo[i]+memo[1],memo[i+j*j]);
            }
        }
        
        return memo[n];
    }
};