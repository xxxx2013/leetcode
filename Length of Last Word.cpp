class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int res = 0;
        
        int length = s.length();
        
        while(s[length-1] == ' ') length--;
        
        int i;
        for(i = length-1;i>=0;i--)
        {
            if(s[i] != ' ') res++;
            else
            {
            break;
            }
        }
        
        return res;
    }
};