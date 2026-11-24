class Solution {
public:

    bool palin(string part) {

        string rev = part;
        reverse(part.begin(), part.end());

        return part == rev;

    }    

    void helper(string s, vector<string>& partition, vector<vector<string>>& ans) {

        if(s.size() == 0) {
            
            ans.push_back({partition});
            return;

        }

        for(int i = 0 ; i < s.size(); i++) {

            string part = s.substr(0 , i + 1);

            if(palin(part)) {

                partition.push_back(part);

                helper(s.substr(i + 1), partition, ans);

                partition.pop_back();

            }

        }
    }

    vector<vector<string>> partition(string s) {

        vector<vector<string>> ans;
        vector<string> partition;

        helper(s, partition, ans);

        return ans;
    }
};