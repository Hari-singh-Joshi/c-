#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
string keppadarr[]={"","","abc","def","ghi","jkl"};

void keypad(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string code=keppadarr[ch-'0'];
    string ros=s.substr(1);
    for(int i=0;i<code.length();i++){
        keypad(ros,ans+code[i]);
    }
}
int main(){
keypad("23","");
    
    return 0;
}