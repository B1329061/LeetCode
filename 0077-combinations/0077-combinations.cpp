class Solution {
private:
    inline void backtrack(vector<int>& nums, int start, vector<int>& path, vector<vector<int>>& res,int k) {
        if(path.size()==k)res.push_back(path);
        for (int i = start; i < nums.size(); ++i) {
            path.push_back(nums[i]);
            backtrack(nums, i + 1, path, res,k);
            path.pop_back();
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>res;
        vector<int>path;
        vector<int>nums;
        for(int i=1;i<=n;++i)nums.push_back(i);
        backtrack(nums, 0, path, res,k);
        return res;
    }
};