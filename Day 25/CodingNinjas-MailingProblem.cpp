int timeTakenToMail(string key, string s) 
{
    int n=s.length();
    int m=key.length();
    int count=0,sum=0;
    int a=0;
    for(int i=0;i<n;i++)
    {
        //count=0;
        for(int j=0;j<m;j++)
        {
            if(s[i]==key[j])
            {
                count+=abs(a-j);
                a=j;
            }
        }
    }
    return count;

}
