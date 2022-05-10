class Solution {
public:
    string reverseWords(string s) {
        vector<string> str;
        stringstream ss(s);
        string word, result;
        
        while(ss>>word){
            str.push_back(word);
        }
        
        for(int i=str.size()-1;i>0;i--){
            result+=str[i]+" ";
        }
        result+=str[0];
        return result;
    }
};
