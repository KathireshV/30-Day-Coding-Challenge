#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,shelves,book,carb;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>shelves>>book>>carb;
	    double a=((double)book/(double)carb);
	    int b=ceil(a);
	    cout<<(shelves*b)<<endl;
	}
	
}
