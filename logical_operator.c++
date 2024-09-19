#include<iostream>
using namespace std;
int main(){
    int num;
    cin>> num;
    if (num%2==0&&num%3==0){
        cout<<"divisible by both";
    }
    else if (num%2==0){
        cout<<"divisible by 2";
    }
    else if(num%3==0){
        cout<<"divisible by 3";
    }
    else{
        cout<<"divisible by none";
    }
    {
        
    }
    return 0;
}