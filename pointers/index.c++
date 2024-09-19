#include <iostream>
#include<climits>
using namespace std;
int main(){

    int a=10;
    int* aptr=&a;
    cout<<*aptr;
    return 0;
}