#include <iostream>
#include <string>
using namespace std;

void replace(string str) {
    // Base case: if the string is empty, return
    if (str.length() == 0) {
        return;
    }
  
    // Check if the first two characters are "pi"
    if (str.length() > 1 && str[0] == 'p' && str[1] == 'i') {
        cout << "3.14";
        // Recur for the string after removing "pi"
        replace(str.substr(2));
    } else {
        // If not, print the first character and recur for the rest of the string
        cout << str[0];
        replace(str.substr(1));
    }
}

int main() {
    string str = "pisdljfpikdsnfapiasfdnkpi";
    replace(str);
    return 0;
}
