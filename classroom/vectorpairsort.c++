#include <iostream>
#include<climits>
#include<vector>
#include<set>
#include<unordered_map>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main(){
vector<pair<int,int>> v;
v = {{1, 4}, {2, 3}, {3, 2}, {4, 1}};
sort(v.begin(),v.end(),compa----);
for(auto i:v){
    cout<<i.second;
}
    
    return 0;
}