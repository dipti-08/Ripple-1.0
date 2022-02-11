class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int i,j,first,second;
        vector<int> res;
        first = second = -1;
        for(i=0;i<nums.size()-1;i++)
        {
            first = i;
            for(j=i+1;j<nums.size();j++)
            {
                second = j;
                if(nums[first] + nums[second] == target)
                {
                    res.push_back(first);
                    res.push_back(second);
                    return res;
                }
            }
        }
        res.push_back(-1);
        res.push_back(-1);
        return res;
    }
};
