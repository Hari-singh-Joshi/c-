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
    stack<char>st;
    for(int i=0;i<s.size();i++){
        st.push(s[i]);
        
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
  
}

int main(){
string s="harishjoshi";
reversestring(s);
    
    return 0;
}