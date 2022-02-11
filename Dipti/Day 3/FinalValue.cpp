class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) 
    {
        int res=0,n=operations.size();
        for(int i=0;i<n;i++)
        {
            switch(operations[i][1])
            {
                case '+':
                    res++;
                    break;
                case '-':
                    res--;
                    break;
                default:break;
            }
        }
        return res;
    }
};
