class Solution {
public:
    int reverse(int x) {
        long int sign=1, rev=0;
        if(x<0) sign=-1;
        x=abs(x);
        
        while(x>0){
            if(rev>INT_MAX/10 || rev<INT_MIN/10){  //important!
                return 0;
            }
            else{
                rev*=10;
                rev+=(x%10);
                x/=10;
            }
        }
        if(sign==-1) rev=0-rev;
        return rev;
    }
};
