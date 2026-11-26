class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10)return false;
        int round=1;
        int i=10;
        while(n>=0){
            n-=i;
            if(i>0)i--;
            round++;
        }return round&1;
    }
};