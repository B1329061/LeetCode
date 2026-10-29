class Solution {
public:
    int commonFactors(int a, int b) {
        int res=0;
        for(int i=1;i<=min(a,b);++i){
            if(!(a%i) && !(b%i))res++;
        }return res;
    }
};