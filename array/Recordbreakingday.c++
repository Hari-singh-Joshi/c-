#include "bits/stdc++.h"
using namespace std;
int main(){
    int arr[]={1,2,0,7,2,0,2,2};
    int ans=0;
    int mx=-1;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
if(arr[i]>mx&&arr[i]>arr[i+1]){

ans++;

    }
    mx=max(mx,arr[i]);
}
cout<<ans;
}