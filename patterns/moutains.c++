#include <iostream>
using namespace std;
int main(){
    int i,j,n=3;
    for(i=1;i<=n;i++){
      for(j=1;j<=9;j++){
        if((i+j)%4==0 ||(i==2&&j%4==0)){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
      }
      cout<<endl;
    }
    return 0;
}