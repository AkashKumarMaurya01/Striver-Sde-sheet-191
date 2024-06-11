#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dp[101][101];
    int solve(int i , int j , int m , int n )
    {
        if(i>m && j<=n) return 0;
        if(i<=m && j>n) return 0;
        if(i==m-1&&j==n-1)
        {
            return 1;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int sum=0;
        // down  
         sum+=solve(i+1 , j ,m , n);
        // right
        sum+=solve(i , j+1 , m , n );

        return dp[i][j] = sum;
    }
    int uniquePaths(int m, int n) {
       memset(dp , -1 , sizeof(dp));
        return solve(0,0 , m, n);
        
    }
};


// here i just handled the first movement of robo which is initially at arr[0][0]
// if array out of bound then return 0;
// if array is on the bottom -right corner  of the array then return 1 and sum it into the main sum 
//  use dp of size[101][101] if the value is already calculated then return it from the dp[i][j];
