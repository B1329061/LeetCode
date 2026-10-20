class CustomStack {
private:
    int n,cur=0;
    vector<int>v;
public:
    CustomStack(int maxSize) {
        n=maxSize;
    }
    
    void push(int x) {
        if(cur<n){
            v.push_back(x);
            cur++;
        }
    }
    
    int pop() {
        if(v.size()){
            int tp=v[v.size()-1];
            v.pop_back();
            cur--;
            return tp;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        int n=v.size();
        for(int i=0;i<min(k,n);++i){
            v[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */