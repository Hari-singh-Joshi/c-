#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    int count=1;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=1;j<=n-i;j++){
            cout<<count++;
        }
        count=1;
        cout<<endl;
    }
    return 0;
}