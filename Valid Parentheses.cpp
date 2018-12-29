class Solution {
public:
    bool isValid(string s) {
        
        if(s.size()==0)
            return true;
        if(s.size()==1)
            return false;
        
        stack<char> sc;
        
        for(int i=0 ; i<s.size(); i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                sc.push(s[i]);
            }
            else
            {
                if(sc.size()==0)
                {
                    return false;
                }
                char c = sc.top();
                sc.pop();
                char temp;
                if(s[i]==')')
                {
                   temp = '(';
                }
                if(s[i]=='}')
                {
                    temp = '{';
                }
                if(s[i]==']')
                {
                    temp = '[';
                }
                
                if(temp!=c)
                    return false;
                
            }
        }
        
        if(sc.size()==0)
            return true;
        
        return false;
    }
};