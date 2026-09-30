class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int low = 0 ; int product = 1;
        int len = 0; int count = 0;
        if(k<=1){
            return 0;
        }
    for(int high = 0; high< n ; high++){
        product = product*nums[high];

        while(product >= k){
            product = product/nums[low];
            low++;
            
        }
        
        len = high-low+1;
        count = len + count;
    }
    return count;    
        
    }
};
