class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int long long n=x,sum=0;
        while(n)
        {
            int r=n%10;
            n/=10;
            sum+=r;
        }
        if (x%sum==0)
        return sum;
        else
        return -1;
    }
};