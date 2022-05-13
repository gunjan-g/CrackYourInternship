class Solution {
public:
    string addBinary(string a, string b) {
       string res="";
        int c=0,sum;
        int i=a.length()-1, j=b.length()-1;
        while(i>=0 && j>=0){
            if(c==0 && a[i]=='1' && b[j]=='1'){
                c=1;
                res+='0';
            }
            else if(c==1 && a[i]=='1' && b[j]=='1') res+='1';
            else{
                sum=(a[i]-'0')+(b[j]-'0');
                if(c==1 && sum==1) res+='0';
                else{
                    res+=to_string(sum+c);
                    c=0;
                }
            }
            i--;
            j--;
        }
        
        while(i>=0){
            if(c==1 && a[i]=='1') res+='0';
            else{
                res+=to_string(c+(a[i]-'0'));
                c=0;
            }
            i--;
        }
        
        while(j>=0){
            if(c==1 && b[j]=='1') res+='0';
            else{
                res+=to_string(c+(b[j]-'0'));
                c=0;
            }
            j--;
        }
        
        if(c==1)  res+='1';
        reverse(res.begin(),res.end());
        return res; 
    }
};
