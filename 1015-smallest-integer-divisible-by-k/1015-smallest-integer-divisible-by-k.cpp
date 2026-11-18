class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(!(k%2)||!(k%5))return -1;
        if(k==1)return k;
        int len{1};
        int n{1};
        while(n){
            n=(n*10+1)%k;
            len++;
        }return len;
    }
};