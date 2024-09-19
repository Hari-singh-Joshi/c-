#include <iostream>
#include<climits>
#include<vector>
#include<stack>
#include<unordered_map>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;

int evalutation(string st)
{
    stack<int>sta;
    for(int i=0;i<st.size();i++){
       
        if(st[i]>='0'&&st[i]<='9'){
            sta.push(st[i]-'0');
        }
        else{
            int op2=sta.top();
            sta.pop();
            int op1=sta.top();
            sta.pop();
            switch(st[i]){
                case '+':
                sta.push(op1+op2);
                break;
                case '-':
                sta.push(op1-op2);
                break;
                case '*':
                sta.push(op1*op2);
                break;
                case '/':
                sta.push(op1/op2);
                break;
                case '^':
                sta.push(pow(op1,op2));
                break;
            }
        }
    
   
    }
     return sta.top();
}
int main(){
string st="46+2/5*7+";

int ans=evalutation(st);
cout<<ans;
    
    return 0;
}