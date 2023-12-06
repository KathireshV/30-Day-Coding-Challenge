#include <bits/stdc++.h> 
vector<string> generateBinaryNumbers(int n)
{
    vector<string> ans;
    for(int i=1;i<=n;i++)
    {
        string s;
        int x=i;
        while (x > 0) 
        {
          int r = x % 2;
          s = s + (to_string(r));
          x = x / 2;
        }
        reverse(s.begin(),s.end());
        ans.push_back(s);
    }
    return ans;
}
