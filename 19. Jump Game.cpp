//1st Approach
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size(), ans=0;
        
        for(int i=0;i<n;i++){
            if(i>ans) return false;
            ans=max(ans,i+nums[i]);
        }
        return true;
    }
};

//2nd Approach
bool canJump(vector<int>& nums) {
     
        int n=nums.size();
        vector<int> dp(n,0);
        
        dp[0]=true;
        
        for(int i=1;i<n;i++){   
             for(int j=i-1;j>=0;j--){
                 if(dp[j] && j+nums[j]>=i){
                     dp[i]=true;
                     break;
                 }
             }          
        }
        
        return dp[n-1];
    }
