#include <iostream>
#include<climits>
#include<cstring>
using namespace std;
int main(){
char arr[100]="nitin";
bool ans=true;
int length=strlen(arr);
for(int i=0;i<length;i++){
    if(arr[i]!=arr[length-1-i]){
        ans=false;
        break;
    }

}
if(ans==true){
    cout<<"yes palindrome";
}else{
    cout<<"not palindrome";
}
    
    return 0;
}