class Solution {
public:
    long long removeZeros(long long n) {
        int long long x=0;
        int count=0;
        while(n)
        {
            int r=n%10;
            n/=10;
            if(r==0)
             x=x+r;
           
            else
           { x=x+pow(10,count)*r;
            count++;
            }
        }
        return x;
        
    }
};