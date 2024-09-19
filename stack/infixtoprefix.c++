#include <iostream>
#include <stack>
#include <string>
#include <algorithm> // For reverse function
using namespace std;

int prec(char c) {
    if (c == '^') {
        return 3;
    } else if (c == '*' || c == '/') {
        return 2;
    } else if (c == '+' || c == '-') {
        return 1;
    } else {
        return -1;
    }
}

string infixtoprefix(string s) {
    stack<char> st;
    string res = "";

    // Reverse the infix expression
    reverse(s.begin(), s.end());

    // Replace '(' with ')' and vice versa
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            s[i] = ')';
        } else if (s[i] == ')') {
            s[i] = '(';
        }
    }

    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            res += s[i];
        } else if (s[i] == '(') {
            st.push(s[i]);
        } else if (s[i] == ')') {
            while (!st.empty() && st.top() != '(') {
                res += st.top();
                st.pop();
            }
            if (!st.empty()) {
                st.pop();
            }
        } else {
            while (!st.empty() && prec(st.top()) > prec(s[i])) {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while (!st.empty()) {
        res += st.top();
        st.pop();
    }

    // Reverse the postfix result to get the prefix expression
    reverse(res.begin(), res.end());

    return res;
}

int main() {
    string s = "(l-k/a)*(c/b-a)";
    cout << infixtoprefix(s);

    return 0;
}
