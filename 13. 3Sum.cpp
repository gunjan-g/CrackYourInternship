class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        if(nums.size()<3) return {};
        
        vector<vector<int>> result;
        set<vector<int>> s;
        int i,j,k,sum,target=0;
        
        sort(nums.begin(),nums.end());
        
        if(nums[0]>0) return {};
        for(k=0;k<nums.size()-1;k++){
           if(nums[k]>0) continue;
           sum= target-nums[k];
           i=k+1;
           j=nums.size()-1;
           while(i<j){
              if(nums[i]+nums[j]==sum){
                  vector<int> temp;
                  temp.push_back(nums[k]);
                  temp.push_back(nums[i]);
                  temp.push_back(nums[j]);
                  s.insert(temp);
                  i++;
                  j--;
              }
              else if(nums[i]+nums[j]<sum) i++;
              else j--;
           }
        }
        
        for(auto x: s){
            result.push_back(x);
        }
        return result;
    }
};
