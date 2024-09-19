#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
#include<vector>

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
sort(v.begin(),v.end());//time complexity-O(nlogn)
 for(auto i:v){
  
  cout<<i<<" ";
} 

    return 0;
}
