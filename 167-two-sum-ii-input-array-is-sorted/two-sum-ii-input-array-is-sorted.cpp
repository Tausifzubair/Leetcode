class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
       int start=0,end=n-1;
       vector<int>ans;
        while(start<end)
        {
            int sum= numbers[start]+numbers[end];
            if(sum==target)
            {
                start++;
                end++;
                ans.push_back(start);
                ans.push_back(end);
                return ans;
            }
            else if(sum<target)
            start++;
            else
            end--;
        }return ans;
    }
};