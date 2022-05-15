class Solution {
public:
    bool isPowerOfTwo(int n) {
        float f=0;
        while(n>1){
            f=n%2;
            if(f==0) n=n/2;
            else return false;
        }
        if(n==1) return true;
        else return false;
    }
};
