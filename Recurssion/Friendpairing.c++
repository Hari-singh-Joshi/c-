#include <iostream>

#include<algorithm>
using namespace std;

int paringproblem(int n) {
    if (n == 0 || n == 1 || n == 2) {
        return n;
    }
    return paringproblem(n-1) + paringproblem(n-2) * (n-1);
}

int main(){

    cout<<paringproblem(4);
    return 0;
}