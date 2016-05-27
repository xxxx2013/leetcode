class Solution {
    /*
    dfs·½·¨
    */
    
public:
    
    void  dfs(string s,vector <string> a,vector <vector<string>> &res)
    {
        if(s.size() < 1)
        {
            res.push_back(a);
            return;
        }
        
        int i;
        for(i = 0; i < s.size();i++)
        {
            int begin = 0;
            int end = i;
            while(begin < end)
            {
                if(s[begin] == s[end])
                {
                    begin++;
                    end--;
                }
                else
                {
                    break;
                }
            }
            
            if(begin >= end)
            {
                a.push_back(s.substr(0,i+1));
                dfs(s.substr(i+1),a,res);
                a.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        
        vector <string> a;
        vector <vector<string>> res;
        dfs(s,a,res);
        return res;
        
    }
};