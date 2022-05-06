class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size(), val = 0;
        
        for(int i=0;i<n;i++){
            if(nums[i]==i+1 || nums[i]<0)  continue;
            val = nums[i];
            nums[i] = -2;
             while(val>0){
                if(nums[val-1]==val){
                    nums[val-1]=-1;
                    break;
                }
                swap(val,nums[val-1]);
            }
        }
        
        long long used = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==-1){
                nums[used]=i+1;
                used++;
            }
        }
        nums.resize(used);
        return nums;
    }
};
