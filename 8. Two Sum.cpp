class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        multimap<int,int> m;
        
        for(int i=0;i<nums.size();i++){
            if(m.find(target-nums[i])!=m.end()){
                result.push_back(i);
                result.push_back(m.find(target-nums[i])->second);
                break;
            }
            m.insert(pair<int,int> (nums[i],i));
        }
        return result;
    }
};
