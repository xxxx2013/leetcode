bool isMatch(char* s, char* p) {
    /*
    '*':ƥ���κ��ַ����У����������У�
    '?':ƥ���κε����ַ�
    */
    
    /*
    
    */
    if(s == NULL || p == NULL)
    return false;
    
    if(*p == '\0')
    return (*s == '\0');
    
    if(*p == '*')
    {
        while(*p == '*')
        {
            ++p;
        }
        while(*s != '\0')
        {
            if(isMatch(s,p)) return true;
            ++s;
        }
        return isMatch(s,p);
    }
    
    else if(((*s != '\0') && (*p == '?')) || *p == *s)
    {
        return isMatch(s+1,p+1);
    }
    return false;
    
}



bool isMatch(char* s, char* p) {
    /*
    '*':ƥ���κ��ַ����У����������У�
    '?':ƥ���κε����ַ�
    */
    
    /*
    
    */
   char *star ;
   char *res ;
   star = NULL;
   res = NULL;
   while(*s)
   {
       if(*s == *p || *p == '?')
       {
           s++;
           p++;
           continue;
       }
       if(*p == '*')
       {
           star = p;
           p++;
           res = s;
           continue;
       }
       if(star != NULL)
       {
            p = star + 1;
            s = res + 1;
            res++;
            continue;
       }
       return false;
   }
       while(*p == '*') ++p;
             return (*p == '\0');

}