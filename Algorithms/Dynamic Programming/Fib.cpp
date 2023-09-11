#include<iostream>
using namespace std;



 
int fibMemo(int n){
    int memo[n+1];
    std::fill_n(memo, n+1, -1);
    if (memo[n] == -1){
        int res;
        if (n<2)    res = n;
        else res = fibMemo(n-1) + fibMemo(n-2);
        memo[n] = res;
    };
    return memo[n];
}

int fibTab(int n){
    int tab[n+1];
    tab[0] = 0;
    tab[1] = 1;
    for (int i = 2; i < n+1; i++)
    {
        tab[i] = tab[i-1]+ tab[i-2];
    }
    return tab[n];
    
};

int main(){
    for(int i = 0; i<=5;i++) cout<<fibMemo(i)<<" ";
    cout<<endl;
    for(int i = 0; i<=5;i++) cout<<fibTab(i)<<" ";
}