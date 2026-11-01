class Solution {
public:
    int arrangeCoins(int n) {
        
        long long st = 1;
        long long end = n;
        int ans = 0;

        while(st <= end) {

            long long mid = st + (end - st) / 2;

            long long total = (mid * (mid+1)) / 2;

            if(total <= n) {

                st = mid + 1;
                ans = mid;

            }else {

                end = mid - 1;

            }

        }

        return ans;
        
    }
};