#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num;
    int flag=0;
    cout<<"enter the number:";
    cin>>num;
      if(num<=1){
        cout<<"not prime number";
        return 0;
      }
    for(int i=2;i<=sqrt(num);i++){
if(num%i==0){
    cout<<num<<"is not prime number";
    flag=1;
    break;
}

    }
    if(flag==0){
        cout<<num<<"is prime number";
    }
    return 0;
}