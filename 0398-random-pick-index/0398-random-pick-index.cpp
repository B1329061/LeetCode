class Solution {
private:
    vector<int>ref;
    unordered_map<int,vector<int>>mp;
public:
    void put(unordered_map<int,vector<int>>&mp,vector<int>& ref){
        for(int i=0;i<ref.size();++i){
            mp[ref[i]].push_back(i);
        }
    }
    Solution(vector<int>& nums) {
        ref=nums;
        put(mp,ref);
    }
    int pick(int target) {
        auto it=mp.find(target);
        return it->second[rand()%mp[it->first].size()];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */