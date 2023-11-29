vector<int> findAnagramsIndices(string str, string ptr, int n, int m)
{
    int u=0;
    vector<int> result;
    vector<int> res;
    sort(ptr.begin(),ptr.end());
    for(int i=0;i<n;i++)
    {
        if(i<=n-m)
        {
            //c=0;
            string a="";
            for(int j=i;j<i+m;j++)
            {
                a=a+str[j];
            }
            sort(a.begin(),a.end());
            //cout<<a<<" ";
            if(a==ptr)
            {
                u=1;
                result.push_back(i);
            }
        }
    }
    if(u==0)
    {
        return res;
    }
    return result;
}
