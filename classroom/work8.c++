#include <iostream>
#include<climits>
#include<vector>
#include<set>
#include<unordered_map>
#include<map>
#include<string>
#include<algorithm>
using namespace std;q   
int main(){
vector<int> v={1,2,2,3,3,4,5};
int t=count(v.begin(),v.end(),2);
cout<<t;
    
    return 0;
}