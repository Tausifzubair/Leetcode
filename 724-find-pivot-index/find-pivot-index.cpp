class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int pivot=0;
        int n=nums.size()-1;
        int total_sum=0;
        int left_sum=0;
        int right_sum=0;
        for(int i=0; i<=n; i++)
        {
            total_sum+=nums[i];
        }
        while(pivot<=n)
        {
            
            
            right_sum=total_sum-left_sum-nums[pivot];
            
            if(left_sum==right_sum)
            return pivot;
             
            
            
            left_sum += nums[pivot];
                pivot++;
        }
        return -1;
    }
};