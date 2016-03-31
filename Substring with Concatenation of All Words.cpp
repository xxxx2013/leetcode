class Solution {
public:
/*
Ҫ����words�еĴʶ�����һ�飬�м䲻���������ĸ��Ŵʻ㡣����words�еĴ�Ҳ�����ظ�
*/
    vector<int> findSubstring(string s, vector<string>& words) {
        
        map <string,int> str;
        map <string,int> c;
        int words_size = words.size();
        int i;
        for(i = 0;i < words_size;i++)
        {
            str[words[i]]++;
        }
        int s_length = s.length();
        int l_words = words[0].size();
        vector < int > result;
        i = 0;
        for(i = 0; i <= (s_length - words_size*l_words) ;i++)
        {
            c.clear();
            int j;
            for(j = 0; j< words_size;j++)
            {
                string word = s.substr(i + j*l_words,l_words);
                if(str.find(word) == str.end())
                break;
                c[word]++;
                if(c[word] > str[word])
                break;
                
            }
            if(j == words_size)
            result.push_back(i);
        }
        return result;
    }
};