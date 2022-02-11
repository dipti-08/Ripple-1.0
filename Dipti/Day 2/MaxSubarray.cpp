class Solution {
public:
    int maxSubArray(vector<int>& arr) 
    {
        int res = arr[0];
        int maxEnd = arr[0];
        for(int i=1;i<arr.size();i++)
        {
            int sum = maxEnd + arr[i];
            maxEnd = (sum>arr[i])?sum:arr[i];
            res = (res>maxEnd)?res:maxEnd;
        }
        return res;
    }
};
