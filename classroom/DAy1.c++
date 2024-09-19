#include <iostream>
#include<climits>
#include<vector>
#include<set>
#include<unordered_map>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
class employee{
    public:
    int eid;
    string name;
    float salary;

};
int main(){
employee *ob=new employee();//dynamic memory allocation-heap
ob->eid=101;
ob->name="hari";
ob->salary=10150;
cout<<ob->eid;


    
    return 0;
}