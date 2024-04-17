class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0, size=nums.size(); i<size; ++i){
            for(int j=i+1; j<size; ++j){
                if(nums[i]+nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};