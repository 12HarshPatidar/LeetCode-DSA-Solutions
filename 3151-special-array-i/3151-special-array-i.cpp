class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {

        if(nums.size() == 1) {
            return true;
        }

        int prev = 0;

        for (int i = 1; i < nums.size(); i++) {

            if(nums[prev]%2 == 0 && nums[i]%2 == 0) {
                return false;
            }

            if(nums[prev]%2 != 0 && nums[i]%2 != 0) {
                return false;
            }

            prev = i;
        }

        return true;
    }
};