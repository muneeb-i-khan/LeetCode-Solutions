class Solution {
public:
    int mostWordsFound(vector<string>& sen) {
        
        int ans = 0;
        for(int i =0;i<sen.size();i++)
        {int count=1;
            for(int j=0;j<sen[i].length();j++)
            {
                if(sen[i][j]==' ')
                {
                    count++;
                    
                }
            }
            if(count>ans){
                ans = count;
            }
        }
        return ans;
    }
};