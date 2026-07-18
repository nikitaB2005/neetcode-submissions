class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            int n=target-nums[i];
            if(m.find(n)!=m.end()){
                v.push_back(i);
                v.push_back(m[n]);
                break;
            }
            m[nums[i]]=i;
  
        }
        sort(v.begin(),v.end());
        return v;
    }
};
