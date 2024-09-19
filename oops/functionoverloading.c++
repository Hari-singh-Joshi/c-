#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;

class test{
    public:
    void print(int x){
        cout<<x<<endl;
    }
    void print(char ch){
        cout<<ch;
    }
};
int main(){
test t;
t.print(23);
t.print('h');
    
    return 0;
}