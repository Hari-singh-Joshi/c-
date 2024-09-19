// #include <iostream>
// #include<climits>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
// pair<int,string> p;
// int a;
// string s;
// cin>>a>>s;
// p=make_pair(a,s);
// cout<<a<<s;
    
//     return 0;
// }
//find number of pairs that match to the target pair from the n input pairs.//
#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    
pair<int,int>p;
pair<int,int> target;
target=make_pair(8,7);
int n;
cin>>n;
int count=0;
for(int i=0;i<n;i++){
    cin>>p.first;
    cin>>p.second;
    p=make_pair(p.first,p.second);
    if(p==target){
        count++;
    }
}
cout<<count;

    
    return 0;
}