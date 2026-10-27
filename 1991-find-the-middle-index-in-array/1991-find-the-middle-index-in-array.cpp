class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int>pre;
        vector<int>suf;
        int sum=0;
        for(auto it:nums){
            sum+=it;
            pre.push_back(sum);
        }sum=0;
        for(int i=nums.size()-1;i>=0;--i){
            sum+=nums[i];
            suf.push_back(sum);
        }
        
        
        for(int i=0;i<pre.size();++i){
            if(pre[i]==suf[pre.size()-i-1])return i;
        }return -1;
    }
};