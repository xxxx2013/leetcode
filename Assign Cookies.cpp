class Solution {
    //使用贪心算法解决
public:
    
    static bool cmp(const int& a,const int& b)//必须加static关键字,否则报错
    {
        return a>b;
    }
    
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        int gi = 0;
        int si = 0;
        
        sort(g.begin(),g.end(),cmp);
        sort(s.begin(),s.end(),cmp);
        int res = 0;
        while(gi<g.size() && si<s.size())
        {
            if(s[si]>=g[gi])
            {
                si++;
                gi++;
                res = res + 1;
            }
            else
            {
                gi++;
            }
        }
        return res;
    }
};