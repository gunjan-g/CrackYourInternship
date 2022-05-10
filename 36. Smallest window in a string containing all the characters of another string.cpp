string smallestWindow (string s, string p){
       if(s.size()<p.size())return "-1";
       int req[26]={0};
       int brr[26]={0};
       for(int i=0;i<p.size();i++)
           req[p[i]-'a']++;
       int i=0,j=0;
       int useFull=0;
       int left=INT_MIN,right=INT_MAX;
       while(j<s.size()){
           //aquire
           while(useFull<p.size() && j <s.size()){
               if(req[s[j]-'a']>brr[s[j]-'a']){
                   brr[s[j]-'a']++;
                   useFull++;
               }else{
                   brr[s[j]-'a']++;
               }
               j++;
           }
           if((long long)right-left > j-1-i && useFull==p.size()){
               left =i;
               right=j-1;
           }
           //release
           while(useFull==p.size()){
               if(req[s[i]-'a']<brr[s[i]-'a']){
                   brr[s[i]-'a']--;
               }else{
                   brr[s[i]-'a']--;
                   useFull--;
               }
               i++;
               if(useFull==p.size()){
                      if((long long)right-left > j-1-i){
                       left =i;
                       right=j-1;
                   }
               }
           }
       }
       string st="";
       if(left >=0){
           for(int i=left;i<=right;i++)
               st+=s[i];
       }else{
           st="-1";
       }
       return st;
   }
