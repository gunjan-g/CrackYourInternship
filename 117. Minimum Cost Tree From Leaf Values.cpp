int mctFromLeafValues(vector<int>& a) 
   {
       int sum = 0;
       while(a.size() > 1)
       {
           int min_product = INT_MAX;   // min(a[0]*a[1], ... a[N-1]*a[N])
           int me_index = -1;           // min(a[i], a[i+1])
           
           for(int i = 1; i < a.size(); ++i)
           {
               if( min_product > a[i-1]*a[i])
               {
                   me_index = a[i-1] < a[i] ? i - 1 : i;
                   min_product = a[i-1]*a[i];
               }
           }
           sum += min_product;
           a.erase(a.begin() + me_index);
       }
       
       return sum;
