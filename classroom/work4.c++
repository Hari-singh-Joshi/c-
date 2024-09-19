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
map<string,int> m;
int n;
cin>>n;
for(int i=0;i<n;i++){
    string key;
    cin>>key;
    
        m[key]++;
    
}


for(auto it=m.begin();it!=m.end();it++){
cout<<it->first<<" "<<it->second<<endl;
}
    
    return 0;
}