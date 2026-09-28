class Solution {
public:

int find(vector<int>&a){
    int maxi = -1;
for(int i = 0 ; i< 256; i++){
    maxi = max(maxi, a[i]);
}
return maxi;    

}
    int characterReplacement(string s, int k) {
        int low = 0 ;
        int res = INT_MIN;
        int n = s.size();
        vector<int>f(256, 0);
    for(int high = 0 ; high< n; high++){
    f[s[high]]++;
    int len = high-low+1;
    int maxFreq = find(f);
    int diff = len - maxFreq;

      
      while(diff > k){
        f[s[low]]--;
        low++;

        len = high-low+1;
        diff = len - maxFreq;
      }
      res = max(res, len);  
        
    }
    return res;
    }
};
