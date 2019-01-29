class Solution {
    //map查找表方法
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        map<char,int> rec1;
        map<char,int> rec2;
        for(int i=0; i<ransomNote.size(); i++)
        {
            rec1[ransomNote[i]]++;
        }
        
        for(int i=0; i<magazine.size(); i++)
        {
            rec2[magazine[i]]++;
        }
        
        for(map<char,int>::iterator it=rec1.begin(); it!=rec1.end(); it++)
        {
            if(rec2.find(it->first)==rec2.end())
            {
                return false;
            }
            if(rec2.find(it->first)!=rec2.end())
            {
                map<char,int>::iterator iter = rec2.find(it->first);
                if(it->second>iter->second)
                    return false;
            }
        }
        return true;
        
    }
};

class Solution {
    //map查找表方法,只需一个map
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        map<char,int> rec2;
        
        for(int i=0; i<magazine.size(); i++)
        {
            rec2[magazine[i]]++;
        }
        
        for(int i=0; i<ransomNote.size(); i++)
        {
            if(rec2.find(ransomNote[i])==rec2.end())
            {
                return false;
            }
            if(rec2.find(ransomNote[i])!=rec2.end())
            {
                map<char,int>::iterator iter = rec2.find(ransomNote[i]);
                if(iter->second==0)
                    return false;
                rec2[ransomNote[i]]--;
            }
        }
        return true;
        
    }
};