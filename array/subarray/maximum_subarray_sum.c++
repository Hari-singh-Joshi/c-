#include <iostream>
using namespace std;
int main(){
    int arr[]={-1,4,7,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=0;
            for(int k=i;k<=j;k++){
                
                sum+=arr[k];
            }
            cout<<sum;
            cout<<endl;
        }
        
    }
   
}