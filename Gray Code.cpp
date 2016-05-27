class Solution {
    /*
    格雷码和二进制码问题
    从左边第二位起，将每位与左边一位解码后的值异或，作为该位解码后的值
    （最左边一位依然不变）。依次异或，直到最低位。依次异或转换后的值
    （二进制数）就是格雷码转换后二进制码的值。
    */
public:
    vector<int> grayCode(int n) {
        
        vector <int> res;
        int i;
        for(i = 0;i < pow(2,n);i++)
        {
            res.push_back(i/2 ^ i);
            
        }
        return res;
        
    }
};