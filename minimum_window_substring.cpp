class Solution {
public: 

bool fun(vector<int>have , vector<int>need){
    for(int i = 0 ; i< 256; i++){
        if(have[i]< need[i])
            return false;
        
    }
    return true;
}
    string minWindow(string s, string t) {
    vector<int>have(256,0);
    vector<int>need(256,0);
    int n = s.size();
    int m = t.size();

    if(n< m){
        return "";
    }
    int i =0;

    for(i=0 ; i< m; i++){
        need[t[i]]++;
    }    
        int low = 0 ;
    
        int res = INT_MAX;
        int len = 0;
        int start = -1; 

    for(int high = 0 ; high< n; high++){
        have[s[high]]++;

    while(fun(have, need)){

        len = high-low+1;
        if(res > len){
            res = len;
            start = low;
        }
        have[s[low]]--;
        low++;
    } 
    }   
    
     
    if(res == INT_MAX){
        return "";
   
    }  
    return s.substr(start,res); 
    } 
        
    
};
