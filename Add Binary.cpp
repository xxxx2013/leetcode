class Solution {
    /*
    线对齐操作，然后转换成整数相加。
    */
public:
    string addBinary(string a, string b) {
        
        string res;
        
        int size_a = a.size();
        int size_b = b.size();
        if(size_a < size_b)
        return addBinary(b,a);
        
        //对齐操作
        string zeros(size_a - size_b,'0');
        b = zeros + b;
        int carry = 0;
        int i;
        for(i = size_a - 1;i>=0;i--)
        {
            int sum = a[i] - '0' + b[i] - '0' + carry;
            if(sum == 0)
            {
                a[i] = '0';
                carry = 0;
            }
            else if(sum == 1)
            {
                a[i] = '1';
                carry = 0;
                
            }
            else if(sum == 2)
            {
                a[i] = '0';
                carry = 1;
            }
            else
            {
                a[i] = '1';
                carry = 1;
            }
            
        }
        if (carry == 1)
        a = '1' + a;
        
        return a;
        
    }
};