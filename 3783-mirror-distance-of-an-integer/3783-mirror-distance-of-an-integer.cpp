class Solution {
public:
    int mirrorDistance(int n) {
        string s=to_string(n);
        int val;
        std::reverse(s.begin(),s.end());
        stringstream si(s);
        si>>val;
        return abs(val-n);
    }
};