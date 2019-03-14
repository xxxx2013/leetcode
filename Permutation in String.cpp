class Solution {
    //采用滑动窗口 避免出现超时错误
public:
    bool checkInclusion(string s1, string s2) {
    
        if(s2.size()<s1.size())
            return false;
        vector<int> rec(256,0); //char型变量范围
        for(int i=0; i<s1.size(); i++)
        {
            rec[s1[i]]++;
        }
        
        
        int l = 0;
        int r = 0;
        while(r<s2.size())
        {
            if(rec[s2[r]]==0)
            {
                rec[s2[l]]++;
                l++;
            }
            else
            {
                rec[s2[r]]--;
                if(r-l+1 == s1.size())
                {
                    return true;
                }
                r++;
            }
        }

        return false;
    }
    

};