#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    return factorial(n-1)*n;
}
int main(){

    cout<<factorial(4);
    return 0;
}