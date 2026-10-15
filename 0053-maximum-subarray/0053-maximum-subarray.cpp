class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curmax=INT_MIN;
        int cur=0;
        for(int i:nums){
            cur=max(cur+i,0);
            curmax=max(curmax,cur);
        }
        if(!curmax){
            curmax=INT_MIN;
            for(auto it:nums)curmax=max(curmax,it);
        }
        return curmax;
    }
};