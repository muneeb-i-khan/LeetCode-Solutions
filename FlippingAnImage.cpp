class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    int l = image.size();
        vector<int> pans;
        vector<vector<int>> ans;
        for (int i = 0; i < image.size(); i++)
    {
            pans.clear();
        for (int j = 0; j < image.size(); j++)
        {
          pans.push_back(image[i][l-j-1]);
        }   
        ans.push_back(pans);
    }
              for (int i = 0; i < image.size(); i++)
    {
        for (int j = 0; j < image[i].size(); j++)
        {
          if(ans[i][j] == 0)
          {
              ans[i][j] = 1;
          }
            else
            {
                ans[i][j] = 0;
            }
        }   

    }

       return ans; 
        
    }
};