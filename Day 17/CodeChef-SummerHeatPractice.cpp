#include <iostream>
using namespace std;

int main() 
{
	int n,a,b,c,d;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>a>>b>>c>>d;
	    cout<<((c/a)+(d/b))<<endl;
	}
}
