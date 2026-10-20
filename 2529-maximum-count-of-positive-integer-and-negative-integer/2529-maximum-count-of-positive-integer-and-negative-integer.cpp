class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=0,nigga=0;
        for(int i:nums){
            if(i>0)pos++;
            else if(i<0)nigga++;
        }return max(pos,nigga);
    }
};