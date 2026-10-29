class Solution {
private:
    inline void backtrack(vector<int>& nums, int start, vector<int>& path, vector<vector<int>>& res) {
        
        res.push_back(path);

        
        for (int i = start; i < nums.size(); ++i) {
            
            path.push_back(nums[i]);
            
            
            backtrack(nums, i + 1, path, res);
            
            
            path.pop_back();
        }
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> path;
        backtrack(nums, 0, path, res);
        return res;
    }
};