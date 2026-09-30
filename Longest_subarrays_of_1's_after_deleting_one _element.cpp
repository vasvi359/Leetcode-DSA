class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int low = 0;
        int res = INT_MIN;
        int zeros = 0;
        int len = 0;
        int n = nums.size();
    for(int high = 0 ; high< n ; high++){

        if(nums[high]== 0){
            zeros++;
        }
        while(zeros>1){
            if(nums[low]==0){
                zeros--;
            }
            low++;
            

        }
        len = high-low;
        res = max(len, res);
    }
    if(res == INT_MIN){
        return 0;
    }
    return res;    
        
    }
};
