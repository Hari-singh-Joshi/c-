#include<iostream>
using namespace std;
 

int main(){
    int arr[]={1,2,3,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
   int s=12;
   int curr=0;
for(int i=0;i<n;i++){
    curr=0;
    for(int j=i;j<n;j++){
curr+=arr[j];

if(curr==s){
   for(int k=i;k<=j;k++){
    cout<<arr[k]<<" ";
   }
   cout<<endl;
}

    }
}

     
}