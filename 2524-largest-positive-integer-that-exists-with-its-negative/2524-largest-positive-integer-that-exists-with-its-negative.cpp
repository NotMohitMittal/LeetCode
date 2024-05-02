class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int tempMax = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0)
                continue;
            else if (nums[i] > tempMax) {
                for (int j = 0; j < nums.size(); j++) {
                    if (nums[j] == -nums[i])
                        tempMax = nums[i];
                }
            }
        }
        if (tempMax != 0)
            return tempMax;
        return -1;
    }
};