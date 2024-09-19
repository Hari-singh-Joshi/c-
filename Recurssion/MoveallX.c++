#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
string moveallx(string str){
    if(str.size()==0){
        return "";
    }
    char ch=str[0];
    string ans=moveallx(str.substr(1));
    if(ch=='x'){
        return ans+ch;
    }
    else{
        return ch+ans;
    }

}

int main(){
cout<<moveallx("aaxlkjsdlxksdxxljsdl");
    
    return 0;
}