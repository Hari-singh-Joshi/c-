#include <iostream>
#include<climits>
#include<vector>
#include<map>
#include<set>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;
int main(){
set<int> s;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    s.insert(ele);
}
s.erase(s.begin());
for(auto i:s){
    cout<<i<<" ";
}

    
    return 0;
}