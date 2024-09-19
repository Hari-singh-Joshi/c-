#include <iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;

void primefactor(int n){
    int spf[100]={0};
    for(int i=2;i<=n;i++){
        spf[i]=i;
    }
    for (int i = 2; i * i <= n; i++) {
        if (spf[i] == i) { // Check if i is prime
            for (int j = i * i; j <= n; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            } 
        }
    }

while(n!=1){
    cout<<spf[n]<<" ";
    n=n/spf[n];
}


}


int main(){
int n=42;
primefactor(n);
    
    return 0;
}