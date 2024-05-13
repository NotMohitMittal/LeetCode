class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    if (nums.size() == 0) return 0; // if the array is empty 
    // using the two pointer approach
    int pivot = 0;  
    for (int i=0; i<nums.size(); i++) {
        if (nums[i] != nums[pivot]) {
            pivot++;
            nums[pivot] = nums[i];
        }
    }
    return pivot+1;
}
};