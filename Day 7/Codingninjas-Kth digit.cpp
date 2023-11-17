#include <bits/stdc++.h> 
int findKthFromRight(int n, int m, int k) 
{
	long long p=1;
	for(int i=0;i<m;i++)
	{
		p*=n;
	}
	int count=0,ans=0;

	for(int i=0;i<k;i++)
	{
		ans=(int)p%10;
		p=p/10;
		if(p==0)
			break;
	}
	return ans;
}
