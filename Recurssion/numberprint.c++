#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;

int print1(int n){
    if(n==-1){
        return 0;
    }
    cout<<n<<" ";]]]]]]]]]]=
    print1(n-1);
}
int print2(int n){
    if(n==-1){
        return 0;
    }
     print2(n-1);
    cout<<n<<" ";
   
}
int main(){
print1(5);
 print2(5);   
    return 0;
}