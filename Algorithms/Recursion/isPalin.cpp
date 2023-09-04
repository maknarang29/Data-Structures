#include <iostream>
using namespace std;

bool palindrome(string s,int left,int right){
    if (left == right || ) return true;
    else if (s[left] == s[right]) palindrome(s,left+1,right-1);
    else return false;
}

int main(){

    string s = "aa";
    cout<<palindrome(s,0,s.length()-1);
}