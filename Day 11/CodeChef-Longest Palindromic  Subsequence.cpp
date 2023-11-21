#include<iostream>
using namespace std;
int LPS(string s)
{
    int n=s.length();
    int dp[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                dp[i][j]=1;
            }
            else
            {
                dp[i][j]=0;
            }
        }
    }
    for(int i=n-1;i>=0;i--)       // we need to increment the colmns and decrement the rows to modify diagonaly
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
            {
                dp[i][j]=2+dp[i+1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i][j-1],dp[i+1][j]);
            }
        }
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(max<dp[i][j])
            {
                max=dp[i][j];
            }
        }
    }
    return max;
}
int main()
{
    string s;
    cin>>s;
    
    cout<<"The length of the LPS is "<<LPS(s);
}
