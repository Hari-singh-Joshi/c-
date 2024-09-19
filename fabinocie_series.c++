#include <iostream>
using namespace std;
int main(){
    int a,b;
    a=0;
    b=1;
  
    int num;
    cin>>num;
    cout<<a<<endl<<b<<endl;
    while(num>0){
          int c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
        num--;
    }
}