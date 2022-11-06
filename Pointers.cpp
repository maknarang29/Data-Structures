#include <iostream>
using namespace std;

// & returns address of a variable
// * returns value of the variable located at the address specified by its operand

void pointerBasics(){
    int var = 12; // variable var having value 20
    int* ptr; //A pointer variable
    ptr = &var; // assigning the pointer variable the address of var

    cout<<"value at ptr "<< ptr <<endl;
    cout<<"value at var "<< var <<endl;
    cout<<"value at *ptr "<< *ptr <<endl;
}





int main(){
    pointerBasics();
    return 0;
}