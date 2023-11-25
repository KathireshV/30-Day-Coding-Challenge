#include <bits/stdc++.h> 
int sumOfSmallestAndSecondSmallest(int n, vector<int> &arr)
{
    int max=0;
    for(int i=0;i<n-1;i++)
    {
        int sum=arr[i]+arr[i+1];
        if(sum>max)
        {
            max=sum;
        }
    }
    return max;
}
