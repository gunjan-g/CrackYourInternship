class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<vector<int>,vector<string>> m;
        
        for(int i=0;i<strs.size();i++){
            vector<int> hash(26,0);
            for(int j=0;j<strs[i].size();j++){
                hash[strs[i][j]-'a']++;
            }
            m[hash].push_back(strs[i]);
        }
        
        for(auto x: m){
            vector<string> str;
            for(string s: x.second){
                str.push_back(s);
            }
            res.push_back(str);
        }
        return res;
    }
};
