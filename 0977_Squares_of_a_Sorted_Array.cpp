class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    int siz = nums.size();
    vector<int> pos;
    vector<int> neg; 

    for(int i = 0 ; i< siz; i++){

        if(nums[i] >= 0)
         pos.push_back(nums[i]);
        else
         neg.push_back(nums[i]);
        
    }

    if(neg.size()==0){

    for(int i = 0 ; i< pos.size() ; i++)
    pos[i] = pos[i]* pos[i];
    
    return pos;

    }

    if(pos.size()==0){

        for(int i =0 ; i< neg.size(); i++)
            neg[i] = neg[i]* neg[i];
            reverse(neg.begin(), neg.end());
            return neg;
        

    }
    int i = 0;
    int j = 0;
    int n = pos.size();
    int m = neg.size();
    vector<int> res(m+n);
    int id = 0;
    
    for(int i =0 ; i< m; i++)
        neg[i] = neg[i]*neg[i];
        reverse(neg.begin(), neg.end());

    for( int i =0 ; i < n ; i++)
        pos[i] = pos[i] * pos[i];

        while(i < n && j < m){
            if(pos[i] <= neg[j]){
                res[id] = pos[i];
                id++;
                i++;
            }
            else{
                res[id] = neg[j];
                id++;
                j++;
            }
        }
        while(i<n){
            res[id] = pos[i];
            id++;
            i++;
        }
        while(j < m){
            res[id] = neg[j];
            id++;
            j++;
        }
        return res;
    


        
    }
};
