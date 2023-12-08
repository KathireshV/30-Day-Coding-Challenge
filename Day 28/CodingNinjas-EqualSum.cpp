#include <bits/stdc++.h> 
int equalSum(vector<int> token)
{
    int n=token.size();
    int t=0,ls=0;
    for(int i=0;i<n;i++)
    {
        t+=token[i];
    }
    for(int i=0;i<n;i++)
    {
        t-=token[i];
        if(ls==t)
        {
            return i;
        }
        ls+=token[i];
    }
    return -1;

}
