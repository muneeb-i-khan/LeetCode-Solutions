class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        int n = boxes.size();
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            
            for(int j=0;j<n;j++)
            {
                if(j>i)
                {
                       if(boxes[j]=='1')
                    {
                        cnt = cnt + j - i;
                    } 
                }
                
                else if(j<i){
                    if(boxes[j] == '1')
                    {
                        cnt = cnt + i - j;
                    }
                    
                }

            }
            ans.push_back(cnt);
            cnt = 0;
        }
            
        return ans;
    }
};