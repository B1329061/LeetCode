class DataStream {
private:
    int v;
    int l;
    int count=0;
    pair<int,int> target;
public:
    DataStream(int value, int k) {
        v=value;
        l=k;
        target={v,l};
    }
    
    bool consec(int num) {
        if(num==target.first)count++;
        else count=0;

        if(count>=target.second)return true;
        return false;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */