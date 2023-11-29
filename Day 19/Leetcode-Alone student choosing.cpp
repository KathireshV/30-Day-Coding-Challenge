#include <iostream>
using namespace std;

int main() 
{
	int x,n,boy,k,girl;
	cin>>x;
	for(int i=0;i<x;i++)
	{
	    cin>>n>>boy>>k;
	    girl=n-boy;
	    int b1=boy%k;
	    int b2=girl%k;
	    cout<<abs(b1-b2)<<endl;
	}
	return 0;
}
