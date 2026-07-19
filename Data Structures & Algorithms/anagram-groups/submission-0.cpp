class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>v;
        unordered_map<string,vector<string>>m;
        for(string str:strs){
            string key=str;
            sort(key.begin(),key.end());
            m[key].push_back(str);
        }
        for(auto it:m){
            v.push_back(it.second);
        }
        return v;
       
    }
};
