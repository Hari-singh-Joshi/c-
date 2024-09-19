#include<iostream>
using namespace std;
int main(){
    int arr[]={-1,4,-6,7,-4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int currentsum=0;
    int maxsum=INT64_MIN;
    for(int i=0;i<n;i++){
        currentsum+=arr[i];
if(currentsum<0){
    currentsum=0;
}
maxsum=max(maxsum,currentsum);
    }
    cout<<maxsum<<endl;
}