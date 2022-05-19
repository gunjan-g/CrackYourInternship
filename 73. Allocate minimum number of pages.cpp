class Solution 
{
   public:
   bool isPossible(int arr[], int n, int m, int mid){
       int studentCount=1;
       int pageSum=0;
       
       for(int i=0; i<n; i++){
           if(pageSum + arr[i] <= mid){
               pageSum+=arr[i];
           }
           else{
               studentCount++;
               if(studentCount>m or arr[i]>mid){
                   return false;
               }
               pageSum= arr[i];
           }
       }
       return true;
   }
   //Function to find minimum number of pages.
   int findPages(int arr[], int n, int m) 
   {
       int start=0, ans =-1;
       int sum=0;
       for(int i=0; i<n; i++){
           sum= sum+arr[i];
       }
       int end= sum;
       int mid= (start+end)/2;
       
       while(start<=end){
           if(isPossible(arr, n, m, mid)){
               ans= mid;
               end= mid-1;
           }
           else{
               start= mid+1;
           }
           mid= (start+end)/2;
       }
       return ans;
   }
};
