#include <iostream>
#include<climits>
#include<vector>
#include<set>
#include<unordered_map>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
void reversestring(string s){
    stack<string>st;
    for(int i=0;i<s.size();i++){
        string word="";
        while(s[i]!=' '&&i<s.size()){
            word+=s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
string s="my name is hari singh joshi";
reversestring(s);
    
    return 0;
}