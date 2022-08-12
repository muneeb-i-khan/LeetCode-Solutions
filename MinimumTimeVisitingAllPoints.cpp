class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        
        int ans = 0;
        
        for(int i=1; i<points.size(); i++)
        {
            int h = abs(points[i][0] - points[i-1][0]);
            int v = abs(points[i][1] - points[i-1][1]);
            
            
            int d = max(h, v);
            
            ans += d;
        }
        
        return ans;
    }
};