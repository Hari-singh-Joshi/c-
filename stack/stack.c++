#include <iostream>
#include<climits>
#include<vector>
#include<set>
#include<unordered_map>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
# define n 100


class stack{
    int* arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"stack is overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return;

        }
        top--;
    }
    int tops(){
         if(top==-1){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isempty(){
        return top==-1;
        
    }
};
int main(){
    stack st;
    st.push(1);
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);
    cout<<st.tops()<<endl;
    st.pop();
cout<<st.tops()<<endl;
    st.pop();
cout<<st.tops()<<endl;
    return 0;
}