#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
int main(){
 int arr[]={2,2,2,3,5,7,2,2,4,4,4,5,6,7,4,2,3,4};
 int n=sizeof(arr)/sizeof(arr[0]);
 int max_value = *max_element(arr, arr + n);

 int freq[max_value+1]={0};

 for(int i=1;i<n;i++){
    if(arr[i-1]==arr[i]){
    freq[arr[i]]++;
    }
 }
 for(int i=0;i<8;i++){
    cout<<freq[i]<<endl;
 }
    
    return 0;
}