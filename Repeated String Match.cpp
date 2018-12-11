class Solution {
public:
    int repeatedStringMatch(string A, string B) {
        
        string sa = "";
        sa += A;
        int number = 1;
        if(A.size()>=B.size())
        {
            if(strstr(sa.c_str(),B.c_str())!=NULL)
                return 1;
            sa += A;
            if(strstr(sa.c_str(),B.c_str())!=NULL)
                return 2;
        }
        
        if(A.size()<B.size())
        {
            while(sa.size()<=B.size())
            {
                if(sa.size()==B.size())
                {
                    if(strstr(sa.c_str(),B.c_str())!=NULL)
                    {
                        return number;
                    }
                }
                sa += A;
                number++;
            }
            if(strstr(sa.c_str(),B.c_str())!=NULL)
            {
                return number;
            }
            else
            {
                sa += A;
                number++;
                if(strstr(sa.c_str(),B.c_str())!=NULL)
                {
                    return number;
                }
            }
        }
        
        
        return -1;
    }
};