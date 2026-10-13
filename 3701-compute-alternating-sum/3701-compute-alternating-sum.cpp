class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum{0};
        for(int i=0;i<nums.size();++i){
            sum+=(!(i%2))?nums[i]:-nums[i];
        }return sum;
    }
};