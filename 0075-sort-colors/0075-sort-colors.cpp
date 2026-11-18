class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>mp;
        for(auto it:nums)mp[it]++;
        vector<pair<int,int>>trans;
        for(auto it:mp){
            trans.push_back({it.first,it.second});
        }int index{0};
        for(int i=0;i<nums.size();++i){
            if(trans[index].second){
                nums[i]=trans[index].first;
                trans[index].second--;
            }
            else{
                index++;
                nums[i]=trans[index].first;
                trans[index].second--;
            }
        }
    }
};