class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int size = word.size();
        
        if(size<=2)
        {
          if((word[0]>='a'&&word[0]<='z')&& (word[1]>='A'&&word[1]<='Z'))
              return false;
           return true;
        }
        if(size>=3)
        {
          if((word[0]>='a'&&word[0]<='z')&& (word[1]>='A'&&word[1]<='Z'))
              return false;
         
        }
        
        int i,j;
        for(i=2; i<size; i++)
        {
            if((word[i]>='A'&&word[i]<='Z') && (word[0]>='a'&&word[0]<='z'))
            {
                return false;
            }
            if((word[i]>='A'&&word[i]<='Z') && (word[0]>='A'&&word[0]<='Z')&& (word[1]>='a'&&word[1]<='z'))
            {
                return false;
            }
            if((word[i]>='a'&&word[i]<='z') && (word[0]>='A'&&word[0]<='Z')&& (word[1]>='A'&&word[1]<='Z'))
            {
                return false;
            }
        }
        
        return true;
        
    }
};