#include<iostream>
using namespace std;
int main(){
    int arr[]={1,0,5,4,6,8};
    int mx=-999999;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        cout<<mx<<endl;
    }
    
    return 0;
}