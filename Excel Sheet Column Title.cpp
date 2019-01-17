class Solution {
    //取模(mod)法求解,注意(n-1)
public:
    string convertToTitle(int n) {
        
        string res = "";
		vector<char> rec;
        char c = 'A';
        if(n<=26)
        {
            res = (char)(c + (n-1)) + res;
            return res;
        }
        
        while(n>0)
        {
			int temp = (n-1)%26;
			res = (char)('A' + temp) + res;
			n = (n-1)/26;
        }
        
        return res;
        
    }
};