#include <iostream>
#include <vector>
using namespace std;

int editDistDP(string s1,string s2, int m , int n){
    int dp[m+1][n+1];
    
    for (int i = 1; i <= m; i++)
    {
        dp[i][0] = i;
    }
    for (int j = 1; j <= n; j++)
    {
        dp[0][j] = j;
    }
    for(int i =0; i <= m; i++){
        for (int j = 0; j <= n; j++)
        {
            if (s1[i-1] == s2[j-1])     dp[i][j] = dp[i-1][j-1];
            else{
                dp[i][j] = 1 + min(dp[i][j-1] , min(dp[i-1][j],dp[i-1][j-1]));
            }
        }
        
    }
    return dp[m][n];
}


int main()
{
    char X[] = "CAT";
    char Y[] = "CUT";
    int m = strlen(X);
    int n = strlen(Y);
    cout<<"Edit Distance is: "<<editDistDP(X,Y,m,n);
      
    

}