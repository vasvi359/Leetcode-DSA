class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
    int i = 0 ;
    int j = 0;
    int n = nums1.size();
    int m = nums2.size();
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    while(i < n &&  j < m){
        
      if(nums1[i]==nums2[j]){
         res.push_back(nums1[i]);
         i++;
         j++;

         while(i > 0  && i < n && nums1[i] == nums1[i-1]){
            i++;
         }
         while(j > 0 && j< m && nums2[j]==nums2[j-1]){
            j++;

         }
         continue;
      }
      else if(nums1[i]<nums2[j]){
        i++;
      }
      else{
        j++;
      }
      // if i or j goes out of bound
      
        }
        return res;
        
    }
};
