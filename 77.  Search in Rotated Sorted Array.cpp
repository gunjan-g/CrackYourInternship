class Solution {
public:
    int rotsearch(vector<int> nums,int s,int e,int key){
        if(s>e) return -1;
        int mid=(s+e)/2;
        if(nums[mid]==key) return mid;
        if(nums[s]<=nums[mid]){
            if(nums[s]<=key && key<=nums[mid]) return rotsearch(nums,s,mid-1,key);
            else return rotsearch(nums,mid+1,e,key);
        }
        else if(nums[mid]<=nums[e]){
            if(nums[mid]<=key && key<=nums[e]) return rotsearch(nums,mid+1,e,key);
            else return rotsearch(nums,s,mid-1,key);
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        return rotsearch(nums,0,nums.size()-1,target);
    }
};
