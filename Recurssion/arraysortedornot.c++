#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
//need to study more about this logic.
bool sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    bool checkarr=sorted(arr+1,n-1);
    return (arr[0]<arr[1]&&checkarr);
}
int main(){

    int arr[]={10,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<sorted(arr,n);
    return 0;
}