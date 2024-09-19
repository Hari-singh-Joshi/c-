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
vector<int> v;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    v.push_back(ele);
}
auto m=max_element(v.begin(),v.end());
cout<<*m;
    
    return 0;
}