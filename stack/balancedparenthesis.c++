#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isbalanced(const string& s) {
    stack<char> st;

    for (char ch : s) {
        if (ch == '[' || ch == '{' || ch == '(') {
            st.push(ch);
        } else if (ch == ']') {
            if (st.empty() || st.top() != '[') {
                return false;
            }
            st.pop();
        } else if (ch == ')') {
            if (st.empty() || st.top() != '(') {
                return false;
            }
            st.pop();
        } else if (ch == '}') {
            if (st.empty() || st.top() != '{') {
                return false;
            }
            st.pop();
        }
    }

    return st.empty();
}

int main() {
    string s = "(l-k/a)*(c}/b-a)";
    cout << (isbalanced(s) ? "Balanced" : "Not Balanced") << endl;
    return 0;
}
