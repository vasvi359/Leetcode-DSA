class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        unordered_map<int , int>f;
        
        int low = 0;  int count =0 ;
        int len = 0;
        
        int n = arr.size();
        for(int high = 0 ; high< n; high++){
            f[arr[high]]++;
        
        while( f.size()> k){
            f[arr[low]]--;
            if(f[arr[low]]==0){
            f.erase(arr[low]);
            }
            low++;
        }
        
        len = high-low+1;
        
        count = count + len;
        
        }  
        return count;
        
    }

};
