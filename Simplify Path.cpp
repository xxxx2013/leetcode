class Solution {
    /*
    重复连续出现的'/'，只按1个处理，即跳过重复连续出现的'/'；
    如果路径名是"."，则不处理；
    如果路径名是".."，则需要弹栈，如果栈为空，则不做处理；
    如果路径名为其他字符串，入栈。
    */
public:
    string simplifyPath(string path) {
        
        string res;
        stack <string> ss;
        int i;
        int length = path.length();
        for(i = 0;i < length;i++)
        {
            while(i < length && path[i] == '/')
            {
                i++;
            }
            
            res = "";
            
            while(i < length && path[i] != '/')
            {
                res += path[i];
                i++;
            }
            
            if(res == ".." && !ss.empty())
            {
                /*弹出ss栈顶的元素*/
                ss.pop();
            }
            
            else if(res != "" && res != "." && res != "..")
            {
                ss.push(res);
            }
        }
        
        if(ss.empty())
        {
            return "/";
        }
        
        res = "";
        
        while(!ss.empty())
        {
            res = "/" +ss.top() + res;
            ss.pop();
        }
        
        return res;
        
    }
};