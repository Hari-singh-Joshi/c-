#include<iostream>
using namespace std;
// totalSum += arr[i] * (i + 1) * (n - i);


void sum(int arr[],int n){
   int sum=0;
    for(int i=0;i<n;i++){
           sum=0;
for(int j=i;j<n;j++){
    sum+=arr[j];
    cout<<sum<<endl;
}
    }
    
}

int main(){
    int arr[]={1,2,0,7,2};
    int n=sizeof(arr)/sizeof(arr[0]);
   
     sum(arr,n);
}