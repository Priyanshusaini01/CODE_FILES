#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int priority(char c) {
    if (c == '^') return 3;
    else if (c == '*' || c == '/') return 2;
    else if (c == '+' || c == '-') return 1;
    else return -1;
}

string infixToPrefix(string pre_exp) {
    stack<char> st;
    string ans = "";
    string s = pre_exp;
    int n = s.size();

    // Step 1: Reverse the string
    reverse(s.begin(), s.end());
    for (int i = 0; i < n; i++) {
        if (s[i] == ')') s[i] = '(';
        else if (s[i] == '(') s[i] = ')';
    }

    // Step 2: Process the string
    for (int i = 0; i < n; i++) {
            char c = s[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
            ans += c; // Add to ans
        } else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            st.pop(); // Pop '('
        } else if (c == '(') {
            st.push(c);
        } else {
            if (c == '^') {
                while (!st.empty() && priority(c) < priority(st.top())) {
                    ans += st.top();
                    st.pop();
                }
            } else {
                while (!st.empty() && priority(c) <= priority(st.top())) {
                    ans += st.top();
                    st.pop();
                }
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    // Step 3: Reverse the result
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    string s = "(A-B/C)*(A/K-L)";
    cout << infixToPrefix(s) << endl;
    return 0;
}
