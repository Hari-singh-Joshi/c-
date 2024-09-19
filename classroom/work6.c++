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
int n;
cin>>n;
int i;
vector<int> binarr;
while(n!=0){
    binarr.push_back(n%2);
    n=n/2;
    i++;
}
reverse(binarr.begin(),binarr.end());
for(auto it=binarr.begin();it!=binarr.end();it++){
    if(*it==1){
        *it=0;
    }
    else{
    *it=1;}
}
for(auto t:binarr){
    cout<<t<<" ";
}
   
}