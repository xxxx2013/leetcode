class Solution {
    
/*
1~9: {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

10~90: {"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};

100~900: {"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};

1000~3000: {"M", "MM", "MMM"}.
*/

public:
    int romanToInt(string s) {
        
        int length = s.length();
        //使用map键值对solution
        map <char,int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        int n = 0;
        int i;
        
        for(i = 0;i < length;i++)
        {
           
            if(mp[s[i]] >= mp[s[i+1]])
            {
                n += mp[s[i]];
            }
            else
            {
                n -= mp[s[i]];
            }
            
        }
        


        
     return n;   
    }
};