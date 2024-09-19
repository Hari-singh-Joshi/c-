#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
class Teacher{
   // properties or attributes
   public:
   //non parametrized constructor.
   Teacher(string s, string de, string sub, string sa){
    name=s;
    dep=de;
    subject=sub;
    salary=sa;
   }
   //parametrized construcotr
   Teacher(){
cout<<"i am construcotr"; 
   }
        string name;
        string dep;
        string subject;
private:
    string salary;
public:
    void getinfo(){
        cout<<name;
        cout<<dep;
        cout<<subject;
        cout<<salary;
    }

};


int main(){
Teacher t1("hari","cse","computer","2500");
t1.getinfo();
    return 0;
}