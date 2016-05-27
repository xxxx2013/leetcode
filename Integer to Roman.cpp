class Solution {
public:
/*
1~9: {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

10~90: {"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};

100~900: {"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};

1000~3000: {"M", "MM", "MMM"}.
*/
    string intToRoman(int num) {
        
        string str;
        string s[4][10] = { {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},  
            {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},  
            {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},  
            {"", "M", "MM", "MMM"}};
        if(num <= 0 || num >3999)
        return nullptr;
        int jet = 0;
        while(num > 0)
        {
            int r = num % 10;
            //Õâ¾ä×¢Òâ    
            str = s[jet][r] + str;
            jet++;
            num = num/10;
        }
        return str;
        
        
        
    }
};