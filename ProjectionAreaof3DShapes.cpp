class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
       int ans = 0;
        int n= grid.size();
        int a = 0;
        int b = 0;
        int cnt = 0;
        for(int i=0;i<n;i++){
            a = 0;
            b = 0;
            for(int j=0;j<n;j++){
                a = max(a,grid[i][j]);
                b = max(b,grid[j][i]);
                if(grid[i][j]){
                    cnt++;
                }
            }
            ans += a+b;
        }
        
        ans += cnt;
        return ans;
        
    }
};



