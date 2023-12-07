#include <bits/stdc++.h>
using namespace std; 
unordered_map<string,vector<int>> memo;
vector<int> diffWaysToComputeH(string s)
{
    if(memo.find(s)!=memo.end())
    {
        return memo[s];
    }
    vector<int> result;
    for(int i=0;i<s.length();i++)
    {
        char c=s[i];
        if(c=='+' || c=='-' || c=='*')
        {
            vector<int> left=diffWaysToComputeH(s.substr(0,i));
            vector<int> right=diffWaysToComputeH(s.substr(i+1));
            for(int l: left)
            {
                for(int r:right)
                {
                    if(c=='+')
                    {
                        result.push_back(l+r);
                    }
                    else if(c=='-')
                    {
                        result.push_back(l-r);
                    }
                    else if(c=='*')
                    {
                        result.push_back(l*r);
                    }
                }
            }
        }
    }
    if(result.empty())
    {
        result.push_back(stoi(s));
    }
    memo[s]=result;
    return result;
}
vector<int> diffWaysToCompute(string s)
{
    memo.clear();
    return diffWaysToComputeH(s);
}
