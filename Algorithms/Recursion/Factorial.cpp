#include <iostream>
using namespace std;

int fac[30];
int factorial(int n){
    if (n==0||n==1) return 1;
    if (fac[n]) return fac[n];
    else{
        fac[n] = n*factorial(n-1);
        return fac[n];
    } 
}

int facRec(int n){
    if (n<2) return 1;
    return n*facRec(n-1);
}
int main(){
    cout<<factorial(5);
}