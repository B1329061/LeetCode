class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<int,int>mp;
        while(n){
            mp[n%10]++;
            n/=10;
        }int curmin{INT_MAX};
        int res{0};
        for(auto it:mp){
            if(it.second<curmin){
                res=it.first;
                curmin=it.second;
            }
        }return res;
    }
};