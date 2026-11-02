class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int max = *max_element(arr.begin(),arr.end());

        vector<bool> temp(max + 1,false);

        for(int i = 0; i < arr.size(); i++) {

            temp[arr[i]] = true;

        }   

        for(int i = 1; i < max; i++) {

            if(!temp[i]) {

                k--;

                if(k == 0) {

                    return i;

                }

            }
        }     

        return max + k;
    }
};