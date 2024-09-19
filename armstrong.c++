#include <iostream>
#include<math.h>
using namespace std;

int main(){
int num,lastdigit,sum=0;
cin>>num;
int original=num;
while(num>0){
lastdigit=num%10;
sum+=round(pow(lastdigit,3));
num=num/10;
}
cout<<sum;
if(sum==original){
    cout<<"armstrong number";
}
else{
    cout<<"not";
}
}