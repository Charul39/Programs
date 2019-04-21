int minDistance(string A, string B)
{
    int x=A.size(),y=B.size();
    int dp[x+1][y+1],i,j;
    for(i=0;i<=x;i++)
    {
        for(j=0;j<=y;j++)
        {
            if(i==0)
                dp[i][j] = j;
            else if(j==0)
                dp[i][j] = i;
            else if(A[i-1] == B[j-1])
                dp[i][j] = dp[i-1][j-1];
            else
                dp[i][j] = 1 + min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1]);
        }
    }
    return dp[x][y];
}
