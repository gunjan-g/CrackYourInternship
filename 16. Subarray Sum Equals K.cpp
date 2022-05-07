class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int sum=0,ans=0;
        m[sum]= 1;
        
        for(int n:nums){
            sum+= n;
            int temp= sum-k;
            if(m.find(temp)!=m.end()){
                ans+= m[temp];
            }
            m[sum]++;
        }
        return ans;
    }
};
