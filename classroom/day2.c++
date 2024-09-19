#include <iostream>
#include<climits>
#include<vector>
#include<set>
#include<unordered_map>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
class product{
    public:
    string name;
    float price;
    float weight;

    void setdata(string n,float p,float w){
        this->name=n;
        this->price=p;
        this->weight=w;
    }
    void getdata(){
        cout<<"name="<<this->name<<endl<<"price="<<this->price<<endl<<"weight="<<this->weight<<endl;
    }
    void modify(float pr){
        this->price=pr;
    }

};
int main(){
product *p=new product();
p->setdata("apple",4,5);
p->getdata();
p->modify(4.4);
p->getdata();
    
    return 0;
}