class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high, int &reversePairCount) {
    int leftInd = low, rightInd = mid+1, r = rightInd, temp[high-low+1], tempInd = 0, counter = 0;
    while(leftInd<=mid) {
        while( r<=high && (nums[leftInd] > (long)2*nums[r]) ) counter++, r++;
        reversePairCount+= counter;
        while( rightInd<=high && nums[rightInd]<=nums[leftInd] ) {
            temp[tempInd++] = nums[rightInd++];
        }
        temp[tempInd++] = nums[leftInd++];
    }
    while(rightInd<=high) {
        temp[tempInd++] = nums[rightInd++];
    }
    for(int i=0; i<tempInd; i++) nums[low++] = temp[i];
}

void mergeSort(vector<int>& nums, int low, int high, int &count) {
        if(low<high) {
            int mid = low + (high-low)/2;
            mergeSort(nums, low, mid, count);
            mergeSort(nums, mid+1, high, count);
            merge(nums, low, mid, high, count);
    }
}
    
    int reversePairs(vector<int>& nums) {
        int count = 0, n=nums.size();
        if(n<=1) return count;
        mergeSort(nums, 0, n-1, count);
        return count;
    }
};
