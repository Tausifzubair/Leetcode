class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int count_smaller = 0;
        int count_target = 0;
        
        for (int num : nums) {
            if (num < target) {
                count_smaller++;
            } else if (num == target) {
                count_target++;
            }
        }
        
        // Populate the result vector with the correct indices
        vector<int> result;
        for (int i = 0; i < count_target; i++) {
            result.push_back(count_smaller + i);
        }
        
        return result;
        
    }
};