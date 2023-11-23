#include <bits/stdc++.h> 
bool ninjaGram(string &str)
{
    string arr=str;
    int count=0;
    char alp[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char alp1[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<str.length();j++)
        {
            if(str[j]==alp[i] || str[j]==alp1[i])
            {
                count++;
                break;
            }
        }
    }
    if(count==26)
    {
        return true;
    }
    else
    {
        return false;
    }
}
