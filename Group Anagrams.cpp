class Solution {
public:
/*
可以先对字符串排序，然后存储到hashmap里面，然后跟剩余的字符（先排序）比对，相等的话则把原串存入到到map中
*/
    string s_sort(string s)
    {
        sort(s.begin(),s.end());
        return s;
    }
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> res;
        sort(strs.begin(),strs.end());
        map<string,vector<string>> cocos;
        int i;
        for(i = 0;i <strs.size();i++)
        {
            cocos[s_sort(strs[i])].push_back(strs[i]);
            
        }
        map<string,vector<string>> :: iterator it;
        for(it = cocos.begin();it != cocos.end();it++)
        {
            /*
            it first是迭代器指向键值，it second是迭代器指向对应的值
            */
            
            res.push_back(it->second);
        }
        
        return res;
    }
};