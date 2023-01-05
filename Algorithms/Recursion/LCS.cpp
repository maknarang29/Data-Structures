#include <iostream>
#include <vector>
using namespace std;

int LCS(string s1 , string s2, int m,int n,vector<vector<int > > &dp ){
        if (m==0 || n== 0) return 0;
        if (s1[m-1] == s2[n-1]) return dp[m][n] = 1+ LCS(s1,s2,m-1,n-1,dp);
        if (dp[m][n]!= -1) return dp[m][n];
        return dp[m][n] = max(LCS(s1,s2,m-1,n,dp),LCS(s1,s2,m,n-1,dp));
    }
int longestCommonSubsequence(string text1, string text2) {
       int l1 = text1.length();
       int l2 = text2.length();
       vector<vector<int> > dp(l1 + 1, vector<int>(l2 + 1, -1));
       int  ans = LCS(text1,text2,l1,l2,dp);
       return ans;

    }
    int main()
{
    char X[] = "AGGTAB";
    char Y[] = "GXTXAYB";
   
    int m = strlen(X);
    int n = strlen(Y);
    vector<vector<int> > dp(m + 1, vector<int>(n + 1, -1));
    cout << "Length of LCS is " << longestCommonSubsequence(X, Y);

    return 0;
}