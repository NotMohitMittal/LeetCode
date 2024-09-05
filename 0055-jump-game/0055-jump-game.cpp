class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farthestPoint = 0;
        for(int i=0; i<nums.size(); i++) {

            if(i > farthestPoint) {
                return false;
            }

            if(farthestPoint < (nums[i]+i)) {
                farthestPoint = nums[i]+i;
            }

            if(farthestPoint >= nums.size()-1) {
                return true;
            }
        }
        return false;   // this line is never gonna execute
    }
};