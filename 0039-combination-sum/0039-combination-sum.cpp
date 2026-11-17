class Solution {
public:
    set<vector<int>> s;

    void getAllCombinationSum( vector<int>& arr, int idx, int tar, vector<int> &combi, vector<vector<int>> &ans) {

        if(idx == arr.size() || tar < 0) {

            return;

        }

        if(tar == 0) {

            if(s.find(combi) == s.end()) {

                ans.push_back(combi);
                s.insert(combi);

            }

        }

        combi.push_back(arr[idx]);

        // include single
        getAllCombinationSum( arr, idx + 1, tar - arr[idx], combi, ans);

        // include multiple 
        getAllCombinationSum( arr, idx, tar - arr[idx], combi, ans);

        // backtracking
        combi.pop_back();

        // exclude
        getAllCombinationSum( arr, idx + 1, tar, combi, ans);

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> ans;
        vector<int> combi;

        getAllCombinationSum(candidates, 0, target, combi, ans);

        return ans;
    }
};