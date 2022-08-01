class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> x;
        for(int i=0;i<points.size();i++)
        {
            x.push_back(points[i][0]);
        }
        sort(x.begin(),x.end());
        int max=0;
        for(int i=1;i<x.size();i++)
        {
           if((x[i]-x[i-1])>max)
           {
               max = x[i] - x[i-1];
           }
        }
        x.clear();
        return max;
    }
};