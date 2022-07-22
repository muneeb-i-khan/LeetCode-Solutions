class Solution {
public:
    int findNumbers(vector<int>& nums) {
        vector<int> dig;
        for(int i=0;i<nums.size();i++)
        {


    int count = 0;
    while (nums[i] != 0)
    {
        nums[i] = nums[i] / 10;
        ++count;
    }
    dig.push_back(count);
}
        
        int fr = 0;
        for(int i=0;i<dig.size();i++)
        {
            if(dig[i]%2==0)
            {
                fr++;
            }
        }
        return fr;
    }    
    
};