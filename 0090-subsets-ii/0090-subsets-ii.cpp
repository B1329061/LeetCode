class Solution {
private:
    inline void build(vector<int>& ref,int start,vector<int>& path,vector<vector<int>>& res){
        res.push_back(path);
        for(auto it=start;it<ref.size();++it){
            path.push_back(ref[it]);
            build(ref,it+1,path,res);
            path.pop_back();
        }return ;
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        map<vector<int>,int>mp;
        vector<vector<int>>res;
        vector<int>path;
        build(nums,0,path,res);
        for(vector<int> it:res){
            mp[it]++;
        }res.clear();
        for(auto it:mp){
            res.push_back(it.first);
        }
        return res;
    }
};