#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
int mazepath(int n,int i,int j){
    if(i==n-1 ||i==n-1){
        return 1;
    }
    if(i>n-1 || j>n-1){
        return 0;
    }
    return mazepath(n,i+1,j)+mazepath(n,i,j+1);
}

int main(){
cout<<mazepath(3,0,0);
    
    return 0;
}