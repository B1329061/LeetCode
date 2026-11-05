stack<int>s;
vector<int>res(nums.size(),-1);
for(int i=nums.size()-1;i>=0;--i){
  while(!s.empty() && nums[i]>=s.top()){
      s.pop();
  }res[i] = (s.empty())?-1:s.top();
  s.push(nums[i]);
}
