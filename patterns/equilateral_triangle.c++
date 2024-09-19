#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    n=5;
    int count=1;
    for(i=1;i<=n;i++){
        int space=n-i;
        for(j=1;j<=space;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<count++;
            cout<<" ";
        }
        count=1;
        cout<<endl;
    }
}