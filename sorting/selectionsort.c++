#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
int main(){
    int arr[]={2,9,67,4,1,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
selectionsort(arr,n);
for(int i=0;i<=n-1;i++){
    cout<<arr[i]<<" ";
}
return 0;
}