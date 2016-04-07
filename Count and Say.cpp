class Solution {
public:
/*
    使用模拟法
*/
    string countAndSay(int n) {
        
        string s = "1";
        int i;
        for(i = 2;i <= n;i++)
        {
            string next;
            int count = 0;
            int j = 0;
            while(j < s.size())
            {
                int k ;
                for(k = j+1;k<s.size();k++)
                
                    if(s[k] != s[j])
                    break;
                    next.push_back(k-j+'0');
                    next.push_back(s[j]);
                    j = k;
                
            }
            s = next;
        }
        
        
        return s;
    }
};