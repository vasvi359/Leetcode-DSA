class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int max_end = 0; int max_sum = INT_MIN;
        int min_end = 0; int min_sum = INT_MAX;

        for(int i = 0 ; i< n ; i++){
            max_end = max(nums[i], max_end+nums[i]);
            max_sum = max(max_sum , max_end);

            min_end = min(nums[i], min_end+nums[i]);
            min_sum = min(min_sum , min_end);

        }
        return max(abs(max_sum), abs(min_sum));
        
    }
};
