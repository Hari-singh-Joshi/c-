#include <iostream>
#include<climits>
using namespace std;
int main(){
int n1,n2,n3;

cout<<"enter size:";
cin>>n1>>n2>>n3;
cout<<"enter first matrix data"<<endl;
int m1[n1][n2];
int m2[n2][n3];
//input m1 matrix
for(int i=0;i<n1;i++){
    cout << "Enter row " << i + 1 << " of matrix m1: ";
    for(int j=0;j<n2;j++){
cin>>m1[i][j];
    }
}
cout<<"enter second matrix data"<<endl;
//input m2 matrix
for(int i=0;i<n2;i++){
    for(int j=0;j<n3;j++){
cin>>m2[i][j];
    }
}
int result[n1][n3];
//input result matrix
for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
result[i][j]=0;
    }
}

    //multiplication logic part
    //input m1 matrix
for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
for(int k=0;k<n2;k++){
result[i][j]=m1[i][k]*m2[k][j];
}
    }
}
//print
cout<<"result matrix is:"<<endl;
//input m1 matrix
for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
cout<<result[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}
