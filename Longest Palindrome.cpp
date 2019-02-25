class Solution {
    //map 查找表求解
public:
    int longestPalindrome(string s) {
       
        if(s.size()<=1)
            return s.size();
        
        int res;
        map<char,int> rec;
        for(int i=0; i<s.size(); i++)
        {
            rec[s[i]]++;
        }
        int length = 0;
        int max_odd = 0;
        for(map<char,int>::iterator it=rec.begin(); it!=rec.end(); it++)
        {
            if(it->second%2==0)
            {
                length = length + it->second;
            }
            else if(it->second%2!=0)
            {
                max_odd = max(max_odd,it->second);
            }
        }
        int od = 1;
        for(map<char,int>::iterator it=rec.begin(); it!=rec.end(); it++)
        {
            if(it->second%2!=0 && it->second!=max_odd)
            {
                length = length + (it->second-1);
            }
            else if(it->second%2!=0 && it->second==max_odd && od==1)
            {
                length = length + it->second;
                od = 0;
            }
            else if(it->second%2!=0 && it->second==max_odd && od==0)
            {
                length = length + it->second-1;
            }
        }
        
        //ngth = length + max_odd;
        return length;
    }
};