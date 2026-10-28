class Solution {
public:
    bool isIsomorphic(string s, string t) {

        vector<int> st(256, -1);
        vector<int> ts(256, -1);

        for(int i = 0; i < s.length(); i++) {

            char ss = s[i];
            char tt = t[i];

            if(st[ss] == -1 && ts[tt] == -1) {

                st[ss] = tt;
                ts[tt] = ss;

            }else if(st[ss] != tt || ts[tt] != ss) {

                return false;

            }

        }

        return true;

    }
};