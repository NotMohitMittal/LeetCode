class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int temp=0;
        for(int i=0, size=nums.size(); i<size; ++i){
            if(nums[i] == target){
                return i;
            }
            if(nums[i] < target){
                temp = i+1;
            }
        }
        return temp;
    }
};