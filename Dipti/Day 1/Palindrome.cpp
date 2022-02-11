class Solution {
public:
    bool isPalindrome(int x) 
    {
        int num;
        long rev=0;
        num = x;
        while(num > 0)
        {
            rev = rev*10 + (num % 10);
            num /= 10;
        }
        return (rev == x);
    }
};
