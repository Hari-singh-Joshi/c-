#include <iostream>
#include<climits>
using namespace std;
int main(){
int n1,n2;

cout<<"enter size:";
cin>>n1>>n2;
cout<<"enter matrix data"<<endl;
int m1[n1][n2];

//input m1 matrix
for(int i=0;i<n1;i++){
    
    for(int j=0;j<n2;j++){
cin>>m1[i][j];
    }
}
   int target;
   cout<<"enter target element:";
   cin>>target;
   int r=0,c=n2-1;
   while(r<n1 && c>=0){
    if (m1[r][c]==target){
cout<<"target element is found at"<<" "<<r+1<<","<<c+1;
break;
    }
    if(m1[r][c]>target){
        c--;
    }
    else{
        r++;
    }
   }
    return 0;
}