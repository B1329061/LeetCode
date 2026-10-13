class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int>res;
        unordered_map<int,int>mp;
        for(auto it:nums){
            if(!(it%2))mp[0]++;
            else mp[1]++;
        }res.insert(res.end(),mp[0],0);
        res.insert(res.end(),mp[1],1);
        
        return res;
    }
};