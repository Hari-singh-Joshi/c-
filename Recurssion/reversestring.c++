#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
void reverse(string str,int n,int start){
    if(start==n){
     return;
    }
    reverse(str,n,start+1);
    cout<<str[start];
}
int main(){
string str="12342225";
int n=str.size();
int start=0;
reverse(str,n,start);
    
    return 0;
}