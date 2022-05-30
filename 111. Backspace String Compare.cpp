class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1, st2;
        string strs="", strt="";
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='#' && !st1.empty()) st1.pop();
            else if(s[i]!='#') st1.push(s[i]);
        }
        for(int i=0;i<t.length();i++){
            if(t[i]=='#' && !st2.empty()) st2.pop();
            else if(t[i]!='#') st2.push(t[i]);
        }
        
        while(!st1.empty()){
            strs+= st1.top();
            st1.pop();
        }
        while(!st2.empty()){
            strt+= st2.top();
            st2.pop();
        }
        return (strs==strt);
    }
};
