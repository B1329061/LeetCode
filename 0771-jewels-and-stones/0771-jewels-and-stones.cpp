class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int res{0};
        for(char c:stones){
            if(jewels.contains(c))res++;
        }
        return res;
    }
};