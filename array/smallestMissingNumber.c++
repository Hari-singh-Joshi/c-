#include<iostream>
using namespace std;
int main(){
    int arr[]={0,2,9,-6,-3,-8,1};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    bool arrr[n];
    for(int i=0;i<n;i++){
        arrr[i]=false;
    }


    for(int i=0;i<n;i++){
if(arr[i]>=0&arr[i]<n){
    arrr[arr[i]]=true;
}


    }
    for(int i=0;i<n;i++){
        if(arrr[i]==false){
    cout<<i;
    break;
}
    }
}