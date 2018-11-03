class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        
        string ip;
        vector <string> res;
        int size = s.size();
        int i,j,k,l;
        for(i=1; i<=3; i++)
        {
            for(j=1; j<=3; j++)
            {
                for(k=1; k<=3; k++)
                {
                    for(l=1; l<=3; l++)
                    {
                        if(i+j+k+l == size)
                        {
                            int a = atoi(s.substr(0,i).c_str());
                            int b = atoi(s.substr(i,j).c_str());
                            int c = atoi(s.substr(i+j,k).c_str());
                            int d = atoi(s.substr(i+j+k,l).c_str());
                            if(255>=a && 255>=b && 255>=c && 255>=d)
                            {
                                  string temp = to_string(a) + "."+ to_string(b) + "." + to_string(c) + "." + to_string(d);
                                  if(temp.size() == size+3)
                                  {
                                      res.push_back(temp);
                                  }
                                  
                            }
                        }
                        
                    }
                }
            }
        }
        return res;
    }
};