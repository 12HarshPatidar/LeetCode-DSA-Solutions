class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        vector<int> freq(nums.size() + 2, 0);

        for(int i : nums) {

            if(i > 0 && i < freq.size()) {

                freq[i] = 1;

            }

        }

        for(int i = 1; i <= freq.size(); i++) {

            if(freq[i] == 0) {

                return i;

            }

        }

        return nums.size() + 1;
        
    }
};