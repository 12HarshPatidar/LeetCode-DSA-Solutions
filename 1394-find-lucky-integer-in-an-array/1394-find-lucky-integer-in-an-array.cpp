class Solution {
public:
    int findLucky(vector<int>& arr) {

        vector<int> count(501,0);

        for(int x : arr) {
            count[x]++;
        }

        for(int i = 500; i >= 1; i--) {

            if(i == count[i]) {
                return i;
            }

        }

        return -1;
        
    }
};