int countMoves(int n, vector<int> a) 
{
    int ecount=0,dcount=0;
    int step=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            ecount++;
        }
        if(a[i]%3!=0)
        {
            dcount+=(3-a[i]%3);
        }
    }
    if (ecount < dcount) {
        return ecount;
    } else {
        return dcount;
    }
}
