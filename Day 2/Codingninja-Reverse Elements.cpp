#include <bits/stdc++.h>
queue<int> reverseElements (queue<int> q, int k)
{
  queue<int> a;
  int n=q.size();
  int arr[n];
  for(int i=0;i<k;i++)
  {
  arr[i]=q.front(); 
  q.pop();
  } 
  for (int i-k-1;i>=0;i--)
  {
  a.push(arr[i]);
  }    
  for (int i-k;i<n;i++)
  {
    int b=q.front();
    a.push(b);
    q.pop();
  }
  return a;
}
