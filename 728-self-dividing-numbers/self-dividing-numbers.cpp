class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
       vector<int>ans;
        for(int i=left;i<=right;i++)
        {int x=i;
        bool valid=true;
            while(x>0)
            {
                int r=x%10;
                
                if(r==0 ||i%r!=0)
               { valid=false;
                break;}
                x/=10;

            }
            if(valid)
            {
                ans.push_back(i);
            }
        }return ans;
        
    }
};