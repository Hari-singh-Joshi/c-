#include <iostream>
#include<climits>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

void print(map<int,char> &m){
  for(auto it=m.begin();it!=m.end();it++){
    cout<<(*it).first<<" "<<(*it).second<<endl;
  }
}
int main(){

    map<int,char> m;
    m[1]='a';
    m[7]='b';
    m[5]='c';
    int target;
    cin>>target;
    auto it=m.find(target);
    cout<<it->first<<" "<<it->second<<endl;
    m.erase(target);
    // for(auto v: m){
    //     cout<<v.first<<" "<<v.second<<endl;
    // }

  //structure
//   for(auto it=m.begin();it!=m.end();it++){
//     cout<<(it)->first<<" "<<(it)->second<<endl;
//   }
  print(m);
    return 0;
}