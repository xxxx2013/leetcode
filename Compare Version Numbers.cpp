class Solution {
public:
//字符串转为整形再进行比较,去除'.'号  
    int compareVersion(string version1, string version2) {
        
        int val1,val2;
        int num1,num2;
        val1 = 0;
        val2 = 0;
        num1 = 0;
        num2 = 0;
        while(num1<version1.length() || num2<version2.length())
        {
            val1 = 0;
			while(num1 < version1.length())
			{
            if(version1[num1] == '.')
            {
                ++num1;
                break;
            }
            val1 = val1*10 + (version1[num1] - '0');
            ++num1;
			}
            val2 = 0;
			while(num2 < version2.length())
			{
            if(version2[num2] == '.')
            {
                ++num2;
                break;
            }
            val2 = val2*10 + (version2[num2] - '0');
            ++num2;
			}
        
			f(val1>val2) return 1;
			if(val2>val1) return -1; 
        } 
        return 0;
        
    }
};