class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        long int sr=0, sc=0, er=matrix.size()-1, ec= matrix[0].size()-1,i,j;
        while(sr<=er && sc<=ec){
            for(i=sc;i<=ec;i++){
                result.push_back(matrix[sr][i]);
            }
            sr++;
            for(j=sr;j<=er;j++){
                result.push_back(matrix[j][ec]);
            }
            ec--;
            if(sr<=er){
                for(i=ec;i>=sc;i--){
                result.push_back(matrix[er][i]);
               }
            }
            er--;
            if(sc<=ec){
                for(j=er;j>=sr;j--){
                result.push_back(matrix[j][sc]);
               }
            }
            sc++;
        }
        result.resize(matrix.size()*matrix[0].size());
        return result;
    }
};
