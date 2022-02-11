class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        if(nums.size() == 1)
            return nums[0];
        int xor_val = 0;
        for(int i=0;i<nums.size();i++)
        {
            xor_val = xor_val ^ nums[i];
        }
        return xor_val;
    }
};
