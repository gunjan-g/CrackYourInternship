class Solution {
public:
    void sortColors(vector<int>& nums) {
        if(nums.size()== 0) return;
        int start=0, mid=0, end=nums.size()-1;
               
        while(mid<=end){
            if(nums[mid]==0){
                swap(nums[mid], nums[start]);
                mid++;
                start++;
            }         
            else if(nums[mid]==1) mid++;
            else if(nums[mid]==2){
                swap(nums[mid], nums[end]);
                end--;
            }
        }
    }
};
