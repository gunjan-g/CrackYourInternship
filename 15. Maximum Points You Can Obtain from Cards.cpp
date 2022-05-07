class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
         int n = cardPoints.size();
         vector<int>leftSum(n+1,0), rightSum(n+1,0);
        
        for(int i=1;i<=n;i++){
            leftSum[i]= leftSum[i-1]+cardPoints[i-1];
            rightSum[i]= rightSum[i-1]+cardPoints[n-i];
        }
    
        int i,j,res = INT_MIN;
        for(i=k,j=0;i>=0;i--,j++){
            res = max(res,leftSum[i]+rightSum[j]);
        }
        return res;
    }
};
