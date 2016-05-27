class Solution {
    /*
    �ظ��������ֵ�'/'��ֻ��1�������������ظ��������ֵ�'/'��
    ���·������"."���򲻴���
    ���·������".."������Ҫ��ջ�����ջΪ�գ���������
    ���·����Ϊ�����ַ�������ջ��
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
                /*����ssջ����Ԫ��*/
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