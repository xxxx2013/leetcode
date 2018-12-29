class Solution {
public:
    bool isPalindrome(string s) {
        
        if (s.size() == 0 || s.size() == 1)
            return true;
        
        int i = 0;
        int j = s.size() - 1;
        
        
        while(i<j)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                s[i] = s[i] + 32;
            }
            if(s[j]>='A'&&s[j]<='Z')
            {
                s[j] = s[j] + 32;
            }           
            if(s[i]<'a')
            {
                if(s[i]<'0'||s[i]>'9')
                {
                    i++;
                    continue;                    
                }   
            }
            if(s[i]>'z')
            {
                i++;
                continue;
            }
            if(s[j]<'a')
            {
                if(s[j]<'0'||s[j]>'9')
                {
                    j--;
                    continue;                    
                }           
            }
            if(s[j]>'z')
            {
                j++;
                continue;
            }
            if(s[i] != s[j])
            {
                return false;
            }
            else
            {
                ++i;
                --j;
            }
        }
        return true;
    }
};

class Solution {
    //采用Stack方法
public:
    bool isValid(string s) {
        
        if(s.size()==0)
            return true;
        stack<int> stack;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
                stack.push(s[i]);
            else
            {
                if(stack.size()==0)
                    return false;
                char c = stack.top();
                stack.pop();
                char match;
                switch(s[i])
                {
                    case ')':
                        match = '(';
                        break;
                    case ']':
                        match = '[';
                        break;
                    case '}':
                        match = '{';
                        break;
                }
                if(c!=match)
                    return false;
            }
        }
        if(stack.size()!=0)
            return false;
        return true;
    }
};