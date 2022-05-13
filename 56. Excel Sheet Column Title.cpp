class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s="";
        while(columnNumber>0){
            s+= ((columnNumber-1)%26) +'A';
            columnNumber= (columnNumber-1)/26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
