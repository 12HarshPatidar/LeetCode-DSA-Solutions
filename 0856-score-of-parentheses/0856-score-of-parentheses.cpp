class Solution {
public:
    int scoreOfParentheses(string s) {

        stack<int> st;
        st.push(0);

        for(char c : s) {

            if(c == '(') {

                st.push(0);

            }else {

                int x = st.top();

                st.pop();

                if(x == 0) {

                    x = 1;

                }else {

                    x = x*2;

                }

                st.top() = st.top() + x;

            }
        }

        return st.top();
    }
};