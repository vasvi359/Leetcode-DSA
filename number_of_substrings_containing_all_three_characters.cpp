class Solution {
public:
    int numberOfSubstrings(string s) {
        int low = 0;
        int count = 0;
        int n = s.size();
        unordered_map<char, int>f;
    for(int high = 0 ; high< n; high++){
        f[s[high]]++;

        while(f['a']>=1 && f['b']>= 1 && f['c']>= 1){
             f[s[low]]--;
                low++;
            
        }
        count = count+low;
    }
    return count;    
        
    }
};
