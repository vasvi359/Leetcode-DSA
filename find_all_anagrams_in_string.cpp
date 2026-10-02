class Solution {
public:
bool fun(vector<int>have, vector<int>need){
    for(int i =0 ; i< 26 ; i++){
        if(have[i]!= need[i]){
            return false;
        }
    }
    return true;
}

    vector<int> findAnagrams(string s, string p) {
        vector<int>have(26,0);
        vector<int>need(26,0);

    for(int i =0 ; i< p.size(); i++){
        need[p[i]-'a']++;
    }
    int low =0; int len =0;
    vector<int>ans;

   for(int high = 0 ; high< s.size(); high++){
    have[s[high]-'a']++;
    len = high-low+1;

    if(len > p.size()){
        have[s[low]-'a']--;
        low++;
    }
    if(fun(have , need)){
        ans.push_back(low);
    }
   }
   return ans;     
        
    }
};
