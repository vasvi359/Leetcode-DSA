class Solution {
public:

bool fun(vector<int>have , vector<int>need){
    for(int i =0 ; i< 26; i++){
        if(have[i]!= need[i]){
            return false;
        }
    }
    return true;
}
    bool checkInclusion(string s1, string s2) {
        vector<int>have(26, 0);
        vector<int>need(26,0);

    for(int i =0 ; i < s1.size(); i++){
        need[s1[i]- 'a']++;
    } 
    int low = 0;
    int len =0;
    for(int high = 0 ; high< s2.size(); high++){
        have[s2[high]-'a']++;
        len = high-low+1;

    if(len > s1.size()){
        have[s2[low] - 'a']--;
        low++;
    }
    
    if(fun(have, need)){
        return true;
    }
        
    }
    return false;    
        
    }
};
