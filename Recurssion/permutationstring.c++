#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
void permutation(string s,string fixed){
    if(s.length()==0){
        cout<<fixed<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
    char ch=s[i];

    string ros=s.substr(0,i)+s.substr(i+1);
    permutation(ros,fixed+ch);
    }
}
int main(){
permutation("abc","");
    
    return 0;
}