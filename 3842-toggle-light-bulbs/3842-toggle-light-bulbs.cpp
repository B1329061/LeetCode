class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        map<int,int>mp;
        vector<int>res;
        for(int i:bulbs)mp[i]++;
        for(auto it:mp){
            if(it.second%2)res.push_back(it.first);
        }return res;
    }
};