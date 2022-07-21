class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        for(int i=0;i<nums.size();i++)
        {
            auto itPos = target.begin() + index[i];
            auto newIt = target.insert(itPos, nums[i]);

        }
        return target;
    }
};