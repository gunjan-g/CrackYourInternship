class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];
        sort(strs.begin(),strs.end());
        
        int i=0, j=0;
        string str1= strs[0], str2= strs[strs.size()-1], s="";
        while(i<str1.length() && j<str2.length() && str1[i]==str2[j]){
            s+=str1[i];
            i++;
            j++;
        }
        return s;
    }
};
