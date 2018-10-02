class Solution {
    //逐位相加，然后插入字符串
public:
    string addStrings(string num1, string num2) {
        
        string res;
        int len1 = num1.length();
        int len2 = num2.length();
        
        int i = len1 - 1;
        int j = len2 - 1;
        int itea = 0;
        while(i>=0 || j>=0)
        {
            int a,b;
            if(i>=0)
                a = num1[i--] - '0';
            else
                a = 0;
            if(j>=0)
                b = num2[j--] - '0';
            else
                b = 0;
            int sum = a + b + itea;
            res.insert(res.begin(),sum%10+'0');
            itea = sum/10;
        }
        if(itea==1)
            return "1"+res;
        else
            return res;
        
        
    }
};