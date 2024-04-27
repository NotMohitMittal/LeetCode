class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int newSize = 0;
        for (int i = 0, size = nums.size(); i < size; i++) {
            if (nums[i] != val) {
                nums[newSize++] = nums[i] ;
            }
        }
        return newSize;
    }
};