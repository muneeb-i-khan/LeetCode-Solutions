class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int s = digits.size();
        int cnt=0;
       
        if(s==1)
        {
            if(digits[0]==9)
            {
                digits.clear();
                digits.push_back(1);
                digits.push_back(0);
            }
            else
            {
                digits[0]++;
            }
        }
        
        
        else
        {
            for(int i=0;i<s;i++)
            {
                if(digits[i]==9)
                {
                    cnt++;
                }
            }
            
            if(cnt==s)
            {
                digits.clear();
                digits.push_back(1);

for(int j=0;j<cnt;j++)
                {
                    digits.push_back(0);
                }
            }
            
          else{  if(digits[s-1]!=9)
            {
                digits[s-1]++;
            }
            else
            {
                int cnt2 =0;
                for(int i =0;digits[s-i-1]==9;i++)
                {
                    digits[s-i-1]==0;
                    cnt2++;
                }
                for(int j=0;j<cnt2;j++)
                {
                    digits.pop_back();
                }
                digits[s-cnt2-1]++;
                 for(int k=0;k<cnt2;k++)
                {
                    digits.push_back(0);
                }
            }
              } 
        }
        return digits;
    }
};