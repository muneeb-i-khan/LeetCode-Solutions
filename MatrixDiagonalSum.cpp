class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int s = mat[0].size();
    for(int i=0;i<s;i++)
    {
        sum += mat[i][i] + mat[i][s-1-i];
    }
        int ans =0;
        if(s%2!=0)
        {
        ans= sum-mat[s/2][s/2];
        }
        else
        {
            ans = sum;
        }
        return ans;
    }
};