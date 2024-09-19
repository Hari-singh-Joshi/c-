#include <iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={-1,4,7,2};
    int maxsum=LLONG_MIN;
   
    int n=sizeof(arr)/sizeof(arr[0]);
    int currentsum[n+1];
    currentsum[0]=0;
    for(int i=1;i<=n;i++){
        currentsum[i]=currentsum[i-1]+arr[i-1];
    }
for(int i=1;i<=n;i++){
     int sum=0;
    for(int j=0;j<i;j++){
        sum=currentsum[i]-currentsum[j];
maxsum=max(maxsum,sum);
    }
    
}
  cout<<maxsum;
}