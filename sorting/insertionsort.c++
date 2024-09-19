#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
for(int i=1;i<n;i++){
    int current=arr[i];
    int j=i-1;
    while(arr[j]>current&&j>=0){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=current;
}
}

int main(){
    int arr[]={2,9,67,4,1,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
insertionsort(arr,n);
for(int i=0;i<=n-1;i++){
    cout<<arr[i]<<" ";
}
return 0;
}