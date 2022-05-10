#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    string s="abcdefabcde", p="bcd";
    int n= s.size(), m=p.size(), b=10, t=0, pat=0, q=7;
    int h= pow(double(b), double(m-1));
    h= h%q;

    for(int i=0;i<m;i++){
        pat= (pat*b+(p[i]-'a'+1))%q;
        t= (t*b+ (s[i]-'a'+1))%q;
    }

    for(int j=0; j<n-m; j++){
        if(pat==t){
            //cout<<"Pattern found at pos "<<j<<"\n"; - hash function is matching, we've to check
            int temp=0;
            while(temp<m && s[j+temp]==p[temp]) temp++;
            if(temp==m) cout<<"Pattern found at pos "<<j<<"\n";
        }
        t= (t- (s[j]-'a'+1)* h)*b + ((s[j+m]-'a'+1)%q);
    }
    return 0;
}
