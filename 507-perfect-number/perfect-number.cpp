class Solution {
public:
    bool checkPerfectNumber(int num) {
        int long long n=num,sum=0;
        
       for(int i=1;i<=n/2; i++)
       {
        if(n%i==0)
        sum+=i;
       }
        if(sum==num)
        return true;
        else  
        return false;
    }
};