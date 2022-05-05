class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0],maxProfit=0;
        for(int i=1;i<prices.size();i++){
            buy= min(buy,prices[i]);
            maxProfit= max(maxProfit,prices[i]-buy);
        }
        return maxProfit;
    }
};
