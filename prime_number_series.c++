#include <iostream>
#include<math.h>
using namespace std;
bool prime(int num){
if(num<=1){
    return false;
}
for(int i=2;i<=sqrt(num);i++){
    if(num%i==0){
        return false;
    }
}
return true;

}


int main(){
    int num1,num2;
    cout<<"enter first number"<<endl;
    cin>>num1;
     cout<<"enter second number";
    cin>>num2;

for(int i=num1;i<=num2;i++){
    if(prime(i)==true){
        cout<<i<<endl;
    }
}
}
