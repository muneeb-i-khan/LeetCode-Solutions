class Solution {
public:
    bool isPalindrome(int x)
    {
                bool ans = true;
      if(x<0)
      {
          ans = false;
      }
        else
        {
        vector<int> v;
    int count = 0;
            int tmp = x;
            
    while (x != 0)
    {
        x = x / 10;   
        v.push_back(tmp%10);
        tmp /= 10;
        ++count;
    }
            for(int i=0;i<v.size();i++)
            {
                if(v[i]!=v[(v.size())-1-i])
                {
                    ans = false;
                    break;
                }
            }
        }
  return ans;
    }
};