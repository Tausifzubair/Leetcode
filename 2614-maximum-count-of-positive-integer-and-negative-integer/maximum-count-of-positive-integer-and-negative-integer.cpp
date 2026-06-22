class Solution {
public:
    int maximumCount(vector<int>& nums) {
        
        int start=0,end=nums.size()-1,mid,ans,pos=0,neg=0;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(nums[mid]>0)
            {pos=nums.size()-mid;
            end=mid-1;
            }
            else
            start= mid+1;

        }
        start=0,end=nums.size()-1;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(nums[mid]>=0)
            {
            end=mid-1;
            }
            else
            start= mid+1;
        }
         neg=start;
        return max(pos,neg);
    }
};