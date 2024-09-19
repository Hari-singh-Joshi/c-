#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
int main(){

string str="haRish4";
for(int i=0;i<str.size();i++){
    if(str[i]>='a' && str[i]<='z'){
        str[i]-=32;
    }
}
string str1="4";
str1[0]=str1[0]-32;
cout<<str1;
cout<<str;
    return 0;
}