class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
         unordered_map<int,int> m;
          m[0]++;
          int csum=0, cnt=0;
        
          for(int i=0;i<nums.size();i++){
              csum+=nums[i];
              int rem=csum%k;
              if(rem<0) rem+=k; 
              
              if(m[rem]>0) cnt+=m[rem];
              m[rem]++;
          }
          return cnt;
    }
};
