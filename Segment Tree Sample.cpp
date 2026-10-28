class Solution {
private:
    void build(int l,int r,int v,vector<int>& ref,vector<int>& ST){
        if(l==r){
            ST[v]=ref[l];
            return ;
        }int mid=(l+r)/2;
        build(l,mid,2*v+1,ref,ST);
        build(mid+1,r,2*v+2,ref,ST);
        ST[v]=ST[2*v+1]+ST[2*v+2];
        return;
    }

    int querySum(int qL,int qR,int L,int R,int v,const vector<int>& ST){
        if(qR<L || qL>R)return 0;
        if(qL<=L&&qR>=R)return ST[v];
        int mid=(L+R)/2;
        int leftSum=querySum(qL,qR,L,mid,2*v+1,ST);
        int rightSum=querySum(qL,qR,mid+1,R,2*v+2,ST);
        return leftSum+rightSum;
    }
public:
    int IntervalSum(vector<int>& nums) {
        vector<int>ref={1,3,5,7,9,11};
        vector<int>ST(ref.size()*4,0);
        build(0,ref.size()-1,0,ref,ST);
        return querySum (1,5,0,ref.size()-1,0,ST);
    }
};