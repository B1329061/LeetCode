class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>dp(n+1,0);
        for(int i=1;i<=n;i*=2){
            dp[i]=1;
        }
        for(int i=3;i<=n;++i){
            int ex=pow(2,(int)log2(i));
            dp[i]=dp[ex]+dp[i-ex];
        }return dp;
    }
};