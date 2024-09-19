#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
void print(string str,string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=str[0];
    string ros=str.substr(1);
    print(ros,ans);
    print(ros,ans+ch);
}
int main(){
print("abc","");
    
    return 0;
}