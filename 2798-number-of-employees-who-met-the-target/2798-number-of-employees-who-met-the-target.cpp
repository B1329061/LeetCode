class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int res{0};
        for(auto it:hours)res+=(it>=target)?1:0;
        return res;
    }
};