class Solution {
public:
/*
�����ȶ��ַ�������Ȼ��洢��hashmap���棬Ȼ���ʣ����ַ��������򣩱ȶԣ���ȵĻ����ԭ�����뵽��map��
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
            it first�ǵ�����ָ���ֵ��it second�ǵ�����ָ���Ӧ��ֵ
            */
            
            res.push_back(it->second);
        }
        
        return res;
    }
};