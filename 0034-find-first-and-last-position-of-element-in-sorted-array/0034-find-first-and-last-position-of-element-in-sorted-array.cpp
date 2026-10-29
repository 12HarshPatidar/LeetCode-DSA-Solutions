class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1;
        int last = -1;


        // first position
        int st1 = 0, end1 = nums.size() - 1;
        while(st1 <= end1) {

            int mid = st1 + (end1 - st1)/2;
            
                if(nums[mid] == target) {
                    
                    first = mid;
                    end1 = mid - 1;
                    
                }else if(nums[mid] < target) {

                    st1 = mid + 1;

                }else {

                    end1 = mid - 1;

                }
        }

        // last position
        int st2 = 0, end2 = nums.size() - 1;
        while(st2 <= end2) {

            int mid = st2 + (end2 - st2)/2;
            
                if(nums[mid] == target) {
                    
                    last = mid;
                    st2 = mid + 1;

                }else if(nums[mid] < target) {

                    st2 = mid + 1;

                }else {

                    end2 = mid - 1;

                }
        }


       return {first,last};
    }
};