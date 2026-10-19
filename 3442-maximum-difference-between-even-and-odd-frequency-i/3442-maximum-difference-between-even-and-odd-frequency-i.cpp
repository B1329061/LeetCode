class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>mp;
        for(char c:s)mp[c]++;
        int odd=0,ev=INT_MAX;
        for(auto it:mp){
            if(it.second%2)odd=max(odd,it.second);
            else ev=min(ev,it.second);
        }return odd-ev;
    }
};