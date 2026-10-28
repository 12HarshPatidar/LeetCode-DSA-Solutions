class Solution {
public:
    bool halvesAreAlike(string s) {

        int mid_string = s.length()/2;

        string a = s.substr(0 , mid_string);
        string b = s.substr(mid_string);

        // a = a.tolower();
        // b = b.tolower();

        int count1 = 0, count2 = 0;
        
        for(int i = 0; i < mid_string; i++) {

            if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
               a[i] == 'A' || a[i] == 'E' || a[i] == 'I' ||
               a[i] == 'O' || a[i] == 'U') {
                count1++;
            }

        }

        for(int i = 0; i < b.length(); i++) {

            if(b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u'||
               b[i] == 'A' || b[i] == 'E' || b[i] == 'I' ||
               b[i] == 'O' || b[i] == 'U') {
                count2++;
            }

        }

        return count1 == count2;

    }
};