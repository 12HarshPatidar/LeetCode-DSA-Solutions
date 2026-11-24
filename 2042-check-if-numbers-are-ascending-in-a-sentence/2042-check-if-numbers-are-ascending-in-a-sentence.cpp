class Solution {
public:
    bool areNumbersAscending(string s) {

        vector<int> arr;
        string num = "";

        for(char ch : s) {

            if(isdigit(ch)) {

                num += ch;

            } else if(!num.empty()) {

                arr.push_back(stoi(num));
                num = "";

            }

        }

        if(!num.empty()) {

            arr.push_back(stoi(num));

        }

        for(int i = 1; i < arr.size(); i++) {

            if(arr[i] <= arr[i - 1]) {
                
                return false;

            }

        }

        return true;
        
    }
};