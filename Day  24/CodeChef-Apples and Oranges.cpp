#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	for(int u=0;u<t;u++)
	{
	    int a,b,ac;
	    cin>>a>>b;
	    ac=__gcd(a,b);
	    cout<<ac<<endl;
	}
}
