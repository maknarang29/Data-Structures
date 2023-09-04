#include <iostream>
#include <vector>
using namespace std;


void print1toN(int n){
    if (n == 0) return;
    print1toN(n-1);
    cout<<n<<" ";
}   

void printNto1(int n){
    if (n == 0) return;
    cout<<n<<" ";
    printNto1(n-1);
}

int main (){
    print1toN(5);
    cout<<endl;
    printNto1(5);
}