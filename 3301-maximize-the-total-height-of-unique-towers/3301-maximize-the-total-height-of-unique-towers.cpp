#define maximumHeight nums
class Solution {
public:
    long long maximumTotalSum(vector<int>& nums) {
        unordered_map<int,int>mp;
        sort(nums.rbegin(),nums.rend());
        long long res=0;
        int cur=0;
        int prev=INT_MAX;
        for(int i=0;i<nums.size();++i){
            cur=min(nums[i],prev-1);
            if(cur<=0)return -1;
            res+=cur;
            prev=cur;
            //find descend
        }
        return res;
    }
};