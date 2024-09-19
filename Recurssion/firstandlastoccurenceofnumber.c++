#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
int first(int arr[],int n,int i,int key){
    //base condition
    if(i==n){
        return -1;
    }
  if(arr[i]==key){
    return i+1;
  }
  return first(arr,n,i+1,key);
}
int last(int arr[],int n,int i,int key){
    //base condition
    if(i==n){
        return -1;
    }
    int restarr= last(arr,n,i+1,key);
    if(restarr!=-1){
        return restarr;
    }

  if(arr[i]==key){
   return i;
  }

return -1;
}
int main(){
int arr[]={4,2,1,2,5,2,7};
int n=sizeof(arr)/sizeof(arr[0]);
int i=1;
int key=2;
cout<<first(arr,n,i,key)<<endl;
    cout<<last(arr,n,i,key);
    return 0;
}