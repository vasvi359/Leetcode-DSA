class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int low = 0 ; int high = 0;
        int n = s.size();
        int res = INT_MIN;
        int len = 0;
        unordered_map<char,int>f;
        
        int siz = f.size();
        
        for(int high = 0; high < n; high++){
            f[s[high]]++;
            
            while(f.size()> k){
                f[s[low]]--;
                low++;
                
                if(f[s[low-1]]==0){
                    f.erase(s[low-1]);
                }
            }
             if(f.size()== k){
                 len = high-low+1;
                 res = max(res, len);
                 
             }    
            }
        
        if(res==INT_MIN){
            return -1;
        }
            return res;
        
        
    }
};
