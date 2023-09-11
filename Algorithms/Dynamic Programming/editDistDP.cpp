#include <iostream>
#include <vector>
using namespace std;

int editDistDP(string s1,string s2, int m , int n, vector< vector <int> > &dp){
    for (int i = 1; i < m; i++)
    {
        dp[i][0] = i;
    }
    for (int j = 1; j < n; j++)
    {
        dp[0][j] = j;
    }
    for(int i =0; i < m; i++){
        for (int j = 0; j < n; j++)
        {
            if (s1[i-1] == s2[j-1])     dp[i][j] = dp[i-1][j-1];
            else{
                dp[i][j] = 1 + min()
            }
            
        }
        
    }
    
}


int main()
{
    /*
    Below we initialize a 2D vector 
    named "vect" on line 12 and then
    we declare the values on 
    line 14, 15 and 16 respectively.
    */
      
    vector<vector<int>> vect;
    for (int i = 0; i<4;i++){
        for (int j = 0;j<4;j++)
    }
    vect.push_back(vector<int> {1, 2, 3});
    vect.push_back(vector<int> {4, 5, 6});
    vect.push_back(vector<int> {7, 8, 9});
    

    cout<<vect[2][1];

}