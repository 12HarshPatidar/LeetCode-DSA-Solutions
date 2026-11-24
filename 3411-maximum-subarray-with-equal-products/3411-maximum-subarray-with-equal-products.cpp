class Solution {
public:
    int maxLength(vector<int>& nums) {

        int ans = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {

            long long product = 1;
            int g = 0;
            int l = 1;

            for(int j = i; j < n; j++) {

                product *= nums[j];
                g = gcd(g , nums[j]);
                l = lcm(l , nums[j]);

                if(product == (long long)g * l) {

                    ans = max(ans , j - i + 1);

                }

                if(product > 3688000) break;

            }

        }

        return ans;
        
    }
};