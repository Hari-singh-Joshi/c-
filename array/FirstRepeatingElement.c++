#include <iostream>
using namespace std;
int main(){
    int arr[]={1,5,3,6,3,5,6};
    int dumy[]={-1,-1,-1,-1,-1,-1,-1};
    int minid= 7;
    for(int i=0;i<7;i++){
        if(dumy[arr[i]]==-1){
            dumy[arr[i]]=i;
        }
        else{
        minid=min(minid,dumy[arr[i]]);
    }}
cout<<minid+1;
}