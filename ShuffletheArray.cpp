class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int w = (nums.size())/2;
        for(int i=0;i<w;i++)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[i+w]);
        }
        return ans;
    }
};