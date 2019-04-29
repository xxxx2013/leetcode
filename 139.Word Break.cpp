class Solution {
    //动态规划DP
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
        int n = s.size();
        vector<bool> memo(n+1,false);
        memo[0] = true;
        for(int i=1; i<=n; i++)
        {
            for(int j=0; j<=i-1; j++)
            {
                if(memo[j]==true)
                {
                    string temp = s.substr(j,i-j);
                    if(findword(temp,wordDict))
                    {
                        memo[i] = true;
                        break;
                    }
                }
            }
        }
        return memo[n];
    }
    
    bool findword(string& s,vector<string>& wordDict)
    {
        if(wordDict.size()==0)
        {
            return false;
        }
        for(int i=0; i<wordDict.size(); i++)
        {
            if(strcmp(s.c_str(),wordDict[i].c_str())==0)
            {
                return true;
            }
        }
        return false;
    }
};