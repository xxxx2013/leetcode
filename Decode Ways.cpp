class Solution {
public:
    int numDecodings(string s) {
        
        int res = 1;
        int i;
        int temp;
        int length = s.length();
        
        if(length == 0 || s == "")
        return 0;
        
        int prev = 0;
        for(i = 1;i <= length;i++)
        {
            if(s[i-1] == '0')
            {
                res = 0;
            }
            
            if(i <2||!((s[i-2] == '2' && s[i-1] <= '6')|| (s[i-2] == '1')) )
            {
                prev = 0;
            }
            
            temp = res;
            res = prev + res;
            prev = temp;
            
        }
        return res;
    }
};