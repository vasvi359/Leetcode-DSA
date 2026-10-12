class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
       vector<int>sorted = nums;
       sort(sorted.begin(), sorted.end());

       int start = -1;
       int end = -1;
       for(int i =0 ; i< n; i++){
        if(sorted [i]!= nums[i]){
            if(start ==-1){
                start = i;
            }
            end = i;
        } 
        }
         if(start == -1){
            return 0;
        }
       
       return end-start+1;
    }
};
