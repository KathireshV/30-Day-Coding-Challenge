#include <bits/stdc++.h> 
vector<int> prevSmall(vector<int> arr, int n) 
{
    vector<int> ans;
    int c=0;
    ans.push_back(-1);
    int a;
    for(int i=1;i<n;i++)
    {
        a=i-1;
        c=0;
        for(int j=a;j>=0;j--)
        {
            if(arr[j]<arr[i])
            {
                ans.push_back(arr[j]);
                c=1;
                break;
            }
        }
        if(c==0)
        {
            ans.push_back(-1);
        }
    }
    return ans; 
}
