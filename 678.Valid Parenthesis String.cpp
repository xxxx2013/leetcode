class Solution {
    //贪心算法greedy l和r分别表示最小和最大左括号的数量 
public:
    bool checkValidString(string s) {
        
        if(s.size()==0)
            return true;
        if(s.size()==1)
            return s[0]=='*';
        
        int l = 0;
        int r = 0;
        
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i]=='(')
            {
                l = l + 1;
            }
            else
            {
                l = l - 1;
            }
            if(s[i]!=')')
            {
                r = r + 1;
            }
            else
            {
                r = r - 1;
            }
            if(r < 0)
                break;
            l = max(l,0);
        }
        
        return l == 0; //返回最小左括号数量是否为0
        
    }
};