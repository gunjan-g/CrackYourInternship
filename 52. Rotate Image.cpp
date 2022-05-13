class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
          for(int j=i;j<n;j++){
             int temp=matrix[i][j];
             matrix[i][j]=matrix[j][i];
             matrix[j][i]=temp;
          }
        }

       int j=0;
       while(j<n/2){
          for(int i=0;i<n;i++){
             int temp=matrix[i][j];
             matrix[i][j]=matrix[i][n-j-1];
             matrix[i][n-j-1]=temp;
          }
          j++;
      }
    }
};
