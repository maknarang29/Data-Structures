#include <iostream>
using namespace std;

int sumofNnums( int n){
    if (n<2) return n;
    else return n+sumofNnums(n-1); 
}

int main(){
    cout<<sumofNnums(5);
}