class Solution {
public:
    void reverseWords(string &s) {
        
        //int size = s.size();
        
        if(s==" ")
        {
            s.erase(0,1);
            return ;
        }
        
        reverseword(s);
        int a = 0;
        for(int i=0; i<s.size(); i++)
        {
            
            if(s[i]==' ')
            {
                int l=a;
                int r=i-1;
                while(l<r)
                {
                    char temp;
                    temp = s[l];
                    s[l] = s[r];
                    s[r] = temp;
                    r--;
                    l++;
                }
                a = i+1;
            }
            if(i==s.size()-1)
            {
                int l=a;
                int r=i;
                while(l<r)
                {
                    char temp;
                    temp = s[l];
                    s[l] = s[r];
                    s[r] = temp;
                    r--;
                    l++;                    
                }
            }
        }
        
        return;
        
    }
    void reverseword(string &word)
    {
        int size = word.size();

		for(int i=0; i<word.size();)
		{
			if(word[i]==' '&&i==0)
			{
				word.erase(i,1);
				continue;
			}
			if(word[i]==' '&&word[i-1]==' ')
			{
				word.erase(i,1);
				i--;
				continue;
			}
			if(word[i]==' '&&i==word.size()-1)
			{
				word.erase(i,1);
				continue;
			}

			i++;
		}
        int l=0;
        int r = word.size()-1;
        
        while(l<r)
        {

            char temp;
            temp = word[l];
            word[l] = word[r];
            word[r] = temp;
            l++;
            r--;
        }
        return;
    }
};