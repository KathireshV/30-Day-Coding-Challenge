#include <bits/stdc++.h> 
int max_shares(int k, int n, vector<int> &shares)
{
    int count=0,a=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(shares[i]<=k)
            {
                count++;
                k=k-shares[i];
            }
        }
        a++;
    }
    return count;
}
