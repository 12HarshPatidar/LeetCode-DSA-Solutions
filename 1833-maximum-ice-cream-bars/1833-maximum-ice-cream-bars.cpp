class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {

        sort(costs.begin(), costs.end());

        int ans = 0;
        int i = 0;

        for(i = 0; i < costs.size(); i++) {

            ans = ans + costs[i];

            if(ans > coins) {

                break;

            }

        }

        return i;
        
    }
};