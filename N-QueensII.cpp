class Solution {
    //回溯法求解, 列+两个对角线
public:
    int totalNQueens(int n) {
        
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        
        vector<vector<string>> res;
        col = vector(n,false);
        dia1 = vector(2*n-1,false);
        dia2 = vector(2*n-1,false);
        number = 0;
        vector<int> q;
        dfs(n,0,q);
        
        return number;
        
    }
    
    void dfs(int n,int index, vector<int>&q)
    {
        if(n==index)
        {
            number = number + 1;
            return;
        }
        
        for(int i=0; i<n; i++)
        {
            if(col[i]==false && dia1[index+i]==false && dia2[n-(index-i)-1]==false)
            {
                q.push_back(i);
                col[i]=true;
                dia1[index+i]=true;
                dia2[n-(index-i)-1]=true;
                dfs(n,index+1,q);
                q.pop_back();
                col[i]=false;
                dia1[index+i]=false;
                dia2[n-(index-i)-1]=false;
            }
        }
        return;
    }
private:
    vector<bool> col;
    vector<bool> dia1;
    vector<bool> dia2;
    int number;
};