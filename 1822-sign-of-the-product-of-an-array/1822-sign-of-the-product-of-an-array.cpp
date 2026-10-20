class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long res=1;
        for(int i : nums){
            res=(res*i)%INT_MAX;
        }if(!res)return 0;
        return (res>0)? 1 : -1;
    }
};