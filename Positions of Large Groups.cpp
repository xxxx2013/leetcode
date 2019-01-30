class Solution {
    //双指针i,j 配合滑动窗口
public:
    vector<vector<int>> largeGroupPositions(string S) {
        
        vector<vector<int>> res;
        if(S.size()<=2)
            return res;
        
        for(int i=0; i<S.size()-1;i++)
        {
            if(S[i+1]==S[i])
            {
                int count = 0;
                for(int j=i; j<S.size(); j++)
                {
                    if(S[j]==S[i])
                    {
                        count = count + 1;
                        if(count>=3 && j==S.size()-1)
                        {
                            vector<int> p;
                            p.push_back(i);
                            p.push_back(j);
                            res.push_back(p);
                            i=j-1;
                            break;
                        }
                    }
                    else if(S[j]!=S[i])
                    {
                        if(count>=3)
                        {
                            vector<int> p;
                            p.push_back(i);
                            p.push_back(j-1);
                            res.push_back(p);
                            i=j-1;
                            break;
                        }
                        else
                        {
                            i=j-1;
                            break;
                        }
                    }
                }
            }

        }
        return res;
    }
};