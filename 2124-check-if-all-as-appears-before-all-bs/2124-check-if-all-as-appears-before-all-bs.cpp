class Solution {
public:
    bool checkString(string s) {

        bool check = true;

        for(int i = s.length() - 2; i >= 0; i--) {

            if( s[i] > s[i + 1] ) {

                check = false;

            }

        }

        return check;
        
    }
};