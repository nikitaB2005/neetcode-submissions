class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(string str:strs){
            ans+=to_string(str.size());
            ans+="#";
            ans+=str;
        }
        return ans;

    }

    vector<string> decode(string s) {
        vector<string>res;
        int i=0;
        
        while(i<s.size()){
            int length=0;
            while(s[i]!='#'){
                length = length * 10 + (s[i] - '0');
                i++;
            }
            
            i++;
            string word=s.substr(i,length);
            res.push_back(word);
            i+=length;


        }
        return res;
    }
};
