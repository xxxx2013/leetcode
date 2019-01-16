class Solution {
    //回溯递归法求解所有组合
public:
    vector<string> letterCombinations(string digits) {
        
        vector<string> res;
        if(digits=="")
            return res;
        findcombinations(digits,0,"",res);
        return res;
    }
    
    void findcombinations(string& digits, int index, const string& s, vector<string>& res)
    {
        
        if(index == digits.size())
        {
            res.push_back(s);
            return;
        }
        
        char c = digits[index];
        string  letters = lettermap[c-'0'];
        for(int i=0; i<letters.size(); i++)
        {
            findcombinations(digits,index+1,s+letters[i],res);
        }
    }
private:
    string lettermap[10] =
    {
      " ","","abc","def","ghi","jkl",
      "mno","pqrs","tuv","wxyz"
    };
    
};