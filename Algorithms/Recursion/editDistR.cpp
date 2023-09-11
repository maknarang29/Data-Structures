#include<iostream>
#include <vector>
using namespace std;


int editDist(string s1, string s2, int m, int n){
    if (m==0) return n;
    if (n==0) return m;
    if (s1[m-1] == s2[n-1]) return editDist(s1,s2,m-1,n-1);
    else  return 1+ min(editDist(s1,s2,m,n-1),min(editDist(s1,s2,m-1,n),editDist(s1,s2,m-1,n-1)));

}

int main(){
    char X[] = "CAT";
    char Y[] = "CUT";
    int m = strlen(X);
    int n = strlen(Y);
    cout<<"Edit Distance is: "<<editDist(X,Y,m,n);
}