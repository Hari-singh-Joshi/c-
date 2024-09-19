#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
vector<int> v;
v.push_back(4);
v.push_back(3);
v.push_back(1);
v.push_back(10);
v.push_back(4);
v.push_back(3);
v.push_back(1);
v.push_back(10);
v.push_back(1);
v.push_back(10);
v.push_back(1);
v.push_back(10);
v.push_back(10);
cout<<v.size()<<endl;
cout<<v.capacity();
    
    return 0;
}