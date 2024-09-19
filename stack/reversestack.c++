#include <iostream>
#include<climits>
#include<vector>
#include<set>
#include<unordered_map>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

void insertbottom(stack<int> &st,int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }
    int topele=st.top();
    st.pop();
    insertbottom(st,ele);
    st.push(topele);
}

void reversestack(stack<int> &st){
if(st.empty()){
    return;
}
int ele=st.top();
st.pop();
reversestack(st);
insertbottom(st,ele);
}
void print(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
        
    }

int main(){
stack<int>st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
reversestack(st);
print(st);
    return 0;
}