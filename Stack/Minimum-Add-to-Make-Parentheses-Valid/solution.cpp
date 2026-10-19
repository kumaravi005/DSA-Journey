class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {

            if (s[i] == '(') {
                st.push(s[i]);
            }
            else {
                if (st.empty()) {
                    // No '(' available to match this ')'
                    st.push(s[i]);
                }
                else if (st.top() == '(') {
                    // Found a matching pair
                    st.pop();
                }
                else {
                    st.push(s[i]);
                }
            }
        }

        return st.size();
    }
};