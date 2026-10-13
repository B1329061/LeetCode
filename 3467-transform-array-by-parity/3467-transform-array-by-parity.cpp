class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int>res;
        for(auto it:nums){
            if(!(it%2))res.push_back(0);
            else res.push_back(1);
        }sort(res.begin(),res.end());
        
        return res;
    }
};