class Solution {
    //递归回溯法求解
public:
    vector<vector<string>> partition(string s) {
        
        vector<vector<string>> res;
        if(s.size()==0)
            return res;
        vector<string> p;
        dfs(res,p,s,0);
        return res;
    }
    
    void dfs(vector<vector<string>>& res,vector<string>& p,string& s,int index)
    {
        if(index == s.size())
        {
            res.push_back(p);
            return;
        }
        
        for(int i=index; i<s.size(); i++)
        {
            string temp = s.substr(index,i-index+1);
            if(ispalindrome(temp))
            {
                p.push_back(temp);
                dfs(res,p,s,i+1);
                p.pop_back();
            }
        }
        
        return;
    }
    
    bool ispalindrome(string& s)
    {
        if(s.size()==1)
            return true;
        int l = 0;
        int r = s.size()-1;
        while(l<r)
        {
            if(s[l]!=s[r])
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    
};