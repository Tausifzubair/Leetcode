class Solution {
public:
    bool isPalindrome(int x) {
        int long long n=x,rev=0;
        if(n<0)
        return false;
        while(n>0)
        {
            int r=n%10;
            n/=10;
            rev=rev*10+r;

        }
    if(x==rev)
    return true;
    else
     return false;
        
    }
};