void subset(int a[],int s,int l,int sum,int n)
{
    if(s==sum)
    {
        count++;
        if(l<n)
        {
            subset(a,s-a[l-1],l,sum,n);
        }
    }
    else
    {
        for(int i=l;i<n;i++)                            
        {
            subset(a,s+a[i],i+1,sum,n);                
        }
    }
}
