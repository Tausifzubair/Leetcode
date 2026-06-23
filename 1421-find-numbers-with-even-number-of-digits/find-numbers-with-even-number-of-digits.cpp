class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int  ans=0;
        for(int i=0; i<nums.size(); i++)
        {
            int count=0;
            int r=nums[i];
            while(r!=0)
            {
                
                r=r/10;
                count=count+1;
            }
            if(count%2==0)
             ans=ans+1;
        }
        return ans;
    }
};