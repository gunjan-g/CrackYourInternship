class Solution {
public:
    vector<vector<int>> dp;
    
    int solve(int i, bool possess, vector<int>& prices){
        if(i>=prices.size())  return 0;
        
        if(dp[i][possess]!=-1) return dp[i][possess];
         
        if(possess==1) return dp[i][possess]= max(solve(i+1,0,prices)+prices[i], solve(i+1,1,prices));
        
        if(possess==0) return dp[i][possess]= max(solve(i+1,1,prices)-prices[i], solve(i+1,0,prices));
        
        return 0;
    }
    
    int maxProfit(vector<int>& prices) {
        dp.resize(30001, vector<int>(2, -1));
        return solve(0,0,prices);
    }
};
