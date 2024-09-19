#include<iostream>
using namespace std;
bool solution(int arr[],int n, int k){
    int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low+1<<" "<<high+1<<endl;
return true;
        }
        else if((arr[low]+arr[high])>k){
            high--;
        }
        else{
            low++;
        }
    }return false;
}
int main(){
    int arr[]={2,4,7,11,14,16,20,21};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=11;
    cout<<solution(arr,n,k);
}