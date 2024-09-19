#include <iostream>
#include<climits>
using namespace std;
int main(){
char arr[100];
cin.getline(arr,100);

int i=0;
int current=0,maxlen=0,st=0,maxst=0;
while(1){
    if(arr[i]==' ' || arr[i]=='\0'){
        if(current>maxlen){
            maxlen=current;
            maxst=st;
        }
        
        current=0;
        st=i+1;
    }
        
else{
    current++;
    }
if(arr[i]=='\0'){
    break;}
    i++;

}
cout<<maxlen<<endl;
for(int i=0;i<maxlen;i++){
    cout<<arr[i+maxst];
}

    return 0;

}