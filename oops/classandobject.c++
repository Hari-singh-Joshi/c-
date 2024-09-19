#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
class Teacher{
   // properties or attributes
   public:
   //non parametrized constructor.
   Teacher(string s, string dep, string sub, string salary){
    name=s;
    dep=dep;
    subject=sub;
    salary=salary;
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
    //methods and member function
    void changedep(string newdep){
        dep=newdep;
    }
    //setter -used to set private variable
    void setSalary(string s){
        salary=s;
    }
    //getter-used to get private variable
    string getSalary(){
        return salary;
    }
class Account{
    private:
        double balance;
        string password;//data hiding
    public:
        string accountid;
        string username;
    
};
};


int main(){
Teacher obj;
obj.name="hari";
obj.dep="cse";
obj.subject="computer";
obj.setSalary("4546");
cout<<obj.name;
cout<<obj.getSalary();
    return 0;
}