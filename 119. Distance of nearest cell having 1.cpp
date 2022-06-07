class Solution 
{
   public:
   //Function to find distance of nearest 1 in the grid for each cell.
vector<vector<int>>nearest(vector<vector<int>>grid)
{
    // Code here
    int n=grid.size(),m=grid[0].size();
    queue<pair<int,int>>q;
    vector<vector<int>>v(n,vector<int>(m,INT_MAX));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j]==1){
                v[i][j]=0;
                q.push({i,j});
            }
        }
    }
    while(!q.empty()){
        int i=q.front().first;
        int j=q.front().second;
        q.pop();
        if(i==0){
            if(j==0){
                if((v[i][j]+1<v[i+1][j]) && n>1){
                    v[i+1][j]=v[i][j]+1;
                    q.push({i+1,j});
                }
                if(v[i][j]+1<v[i][j+1] && m>1){
                    v[i][j+1]=v[i][j]+1;
                    q.push({i,j+1});
                }
            }
            else if(j==m-1){
                if(v[i][j]+1<v[i+1][j] && n>1){
                    v[i+1][j]=v[i][j]+1;
                    q.push({i+1,j});
                }
                if(v[i][j]+1<v[i][j-1] && m>1){
                    v[i][j-1]=v[i][j]+1;
                    q.push({i,j-1});
                }
            }
            else{
                if(v[i][j]+1<v[i+1][j]){
                    v[i+1][j]=v[i][j]+1;
                    q.push({i+1,j});
                }
                if(v[i][j]+1<v[i][j-1]){
                    v[i][j-1]=v[i][j]+1;
                    q.push({i,j-1});
                }
                if(v[i][j]+1<v[i][j+1]){
                    v[i][j+1]=v[i][j]+1;
                    q.push({i,j+1});
                }
            }
        }
        else if(i==n-1){
            if(j==0){
                if((v[i][j]+1<v[i-1][j]) && n>1){
                    v[i-1][j]=v[i][j]+1;
                    q.push({i-1,j});
                }
                if(v[i][j]+1<v[i][j+1] && m>1){
                    v[i][j+1]=v[i][j]+1;
                    q.push({i,j+1});
                }
            }
            else if(j==m-1){
                if(v[i][j]+1<v[i-1][j] && n>1){
                    v[i-1][j]=v[i][j]+1;
                    q.push({i-1,j});
                }
                if(v[i][j]+1<v[i][j-1] && m>1){
                    v[i][j-1]=v[i][j]+1;
                    q.push({i,j-1});
                }
            }
            else{
                if(v[i][j]+1<v[i-1][j]){
                    v[i-1][j]=v[i][j]+1;
                    q.push({i-1,j});
                }
                if(v[i][j]+1<v[i][j-1]){
                    v[i][j-1]=v[i][j]+1;
                    q.push({i,j-1});
                }
                if(v[i][j]+1<v[i][j+1]){
                    v[i][j+1]=v[i][j]+1;
                    q.push({i,j+1});
                }
            }
        }
        else{
            if(j==0){
                if((v[i][j]+1<v[i+1][j])){
                    v[i+1][j]=v[i][j]+1;
                    q.push({i+1,j});
                }
                if(v[i][j]+1<v[i][j+1]){
                    v[i][j+1]=v[i][j]+1;
                    q.push({i,j+1});
                }
                if(v[i][j]+1<v[i-1][j]){
                    v[i-1][j]=v[i][j]+1;
                    q.push({i-1,j});
                }
            }
            else if(j==m-1){
                if(v[i][j]+1<v[i+1][j]){
                    v[i+1][j]=v[i][j]+1;
                    q.push({i+1,j});
                }
                if(v[i][j]+1<v[i][j-1]){
                    v[i][j-1]=v[i][j]+1;
                    q.push({i,j-1});
                }
                if(v[i][j]+1<v[i-1][j]){
                    v[i-1][j]=v[i][j]+1;
                    q.push({i-1,j});
                }
           }
           else{
               if((v[i][j]+1<v[i+1][j])){
                    v[i+1][j]=v[i][j]+1;
                    q.push({i+1,j});
                }
                if(v[i][j]+1<v[i][j+1]){
                    v[i][j+1]=v[i][j]+1;
                    q.push({i,j+1});
                }
                if(v[i][j]+1<v[i-1][j]){
                    v[i-1][j]=v[i][j]+1;
                    q.push({i-1,j});
                }
                if(v[i][j]+1<v[i][j-1]){
                    v[i][j-1]=v[i][j]+1;
                    q.push({i,j-1});
                }
           }
       } 
  }
  return v;
}
};
