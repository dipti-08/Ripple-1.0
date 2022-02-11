class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        vector<int> arr(m+n,0);
        int ctr1=0,ctr2=0,ctr=0;
        while(ctr1<m && ctr2<n)
        {
            if(nums1[ctr1] <= nums2[ctr2])
            {    
                arr[ctr] = nums1[ctr1];
                ctr++;
                ctr1++;
            }
            else
            {    
                arr[ctr] = nums2[ctr2];
                ctr++;
                ctr2++;
            }
        }
        while(ctr1 < m)
        {
            arr[ctr] = nums1[ctr1];
            ctr++;
            ctr1++;
        }
        while(ctr2 < n)
        {
            arr[ctr] = nums2[ctr2];
            ctr++;
            ctr2++;
        }
        nums1 = arr;
    }
};
