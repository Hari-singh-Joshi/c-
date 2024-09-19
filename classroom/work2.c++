#include <iostream>
#include<climits>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main(){
map<int,int> m;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int key;
    cin>>key;
   m[key]++;
}
for(auto val=m.begin();val!=m.end();val++){
    cout<<val->first<<" "<<val->second<<endl;
}
    
    return 0;
}