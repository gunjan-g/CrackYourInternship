class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int start=0, end= nums.size()-1;
        while(start<end){
            int mid= start + (end-start)/2;
            int count=0;
            
            for(int n: nums){
                if(n<=mid) count++;
            }
            
            if(count>mid) end= mid;
            else start= mid+1;
        }
        return start;
    }
};
