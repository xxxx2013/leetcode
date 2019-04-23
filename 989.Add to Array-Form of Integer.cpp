class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        
        vector<int> res;
        string s1;
        for(int i=0; i<A.size(); i++)
        {
            s1 += to_string(A[i]);
        }
        
        string s2;
        s2 += to_string(K);
        int cc = 0;
        
        if(s1.size()!=s2.size())
        {
            if(s1.size()<s2.size())
            {
                string temp = s1;
                s1 = s2;
                s2 = temp;                 
            }
          
            for(int i=s2.size()-1,j=s1.size()-1; j>=0; i--,j--)
            {
				if(cc==1)
				{
					int c1 = s1[j] - '0';
					c1 = c1 + cc;
					s1[j] = c1 + '0';
					cc = 0;
				}

				int sum;
				if(i>=0)
				{
					int m = s2[i]-'0';
					int n = s1[j]-'0';
					sum = m + n;
				}
				else
				{
					int n = s1[j]-'0';
					sum = n;
				}

                if(sum>=10)
                {
					cc = 1;
					int dec = sum - 10;
                    s1[j] = dec + '0';
                }
                else
                {
                    s1[j] = sum + '0';
                }
            }
			if(cc==1)
			{
				 string temp;
				 char c2 = cc + '0';
				 temp += c2;
				 temp += s1;
				 s1 = temp;

			}
        }
        
        else
        {
             for(int i=s2.size()-1,j=s1.size()-1;i>=0,j>=0;i--,j--)
             {
				if(cc==1)
				{
					int c1 = s1[j] - '0';
					c1 = c1 + cc;
					s1[j] = c1 + '0';
					cc = 0;
				}
				int sum = (s1[j]-'0') + (s2[i]-'0');
				if(sum>=10)
				{
					cc = 1;
					int dec = sum - 10;
                    s1[j] = dec + '0';
				}
                else
                {
                    s1[j] = sum + '0';
                }
             }

			 if(cc==1)
			 {
				 string temp;
				 char c2 = cc + '0';
				 temp += c2;
				 temp += s1;
				 s1 = temp;

			 }            
        }
        
        for(int i=0; i<s1.size(); i++)
        {
            res.push_back(s1[i]-'0');
        }
        
        return res;
        
    }
};