class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0) return 0;
        int idx= haystack.find(needle);
        return idx;
    }
};
