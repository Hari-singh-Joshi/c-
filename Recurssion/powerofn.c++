#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
int power(int n,int p){

if(p==0){
    return 1;
}
    int prevpower=power(n,p-1);
    return n*prevpower;
}

int main(){

    cout<<power(4,3);
    return 0;
}