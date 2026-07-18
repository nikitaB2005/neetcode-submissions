class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        bool flag=false;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto i:m){
            if(i.second>1){
                flag=true;
                break;  
            }
            continue;
        }
        if(flag){
            return true;
        }
        else {return false;}
    }
};