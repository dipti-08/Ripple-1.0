class Solution {
public:
    double myPow(double x, int n) 
    {
        if(n == 0)
        {
            return 1;
        }
        bool flag = (n>0)?true:false;    
        int p = abs(n);
        double res=1,num=x;
        while(p > 0)
        {
            if(p%2 != 0)
                res = res * num;
            num = num*num;
            p = p/2;
        }
        if(flag)
            return res;
        return 1/res;
    }
};
