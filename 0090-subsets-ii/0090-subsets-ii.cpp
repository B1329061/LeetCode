class Solution {
private:
    inline void build(vector<int>& ref,int start,vector<int>& path,vector<vector<int>>& res,set<vector<int>>& st){
        res.push_back(path);
        for(auto it=start;it<ref.size();++it){
            path.push_back(ref[it]);
            build(ref,it+1,path,res,st);
            path.pop_back();
        }return ;
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>st;
        vector<vector<int>>res;
        vector<int>path;
        build(nums,0,path,res,st);
        for(vector<int> it:res){
            st.insert(it);
        }res.clear();
        for(auto it:st){
            res.push_back(it);
        }
        return res;
    }
};