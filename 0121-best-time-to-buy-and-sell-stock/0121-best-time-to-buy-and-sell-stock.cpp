class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curmin=INT_MAX;
        int res=INT_MIN;
        for(int i=0;i<prices.size();++i){
            curmin=min(curmin,prices[i]);
            res=max(res,prices[i]-curmin);
        }return res;
    }
};