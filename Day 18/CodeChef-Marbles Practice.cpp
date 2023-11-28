#include <bits/stdc++.h>
using namespace std;
double fact(int a)
{
    double result=1;
    for(int i=2;i<=a;i++)
    {
        result*=i;
    }
    return result;
}
int main() 
{
	int x;
	cin>>x;
	double n,r;
	for(int i=0;i<x;i++)
	{
	    cin>>n>>r;
	    n=n-1;
	    r=r-1;
	    double k=n-r;
	    if(n==r)
	    {
	        cout<<"1"<<endl;
	    }
	    else
	    {
	        double numa=fact(n);
	        //cout<<numa<<endl;
	        double den=fact(r);
	        double dem=fact(k);
	        //cout<<den<<endl<<dem<<endl;
	        double ans=(numa/(den*dem));
	        cout<<ceil(ans)<<endl;
	    }
	}
}
