#include <iostream>
using namespace std;

int sumdigit(int n1)
{
    int sum=0;
    while(n1>0)
    {
	    int r=n1%10;
	    sum+=r;
	    n1=n1/10;
	}
	return sum;
}
int main() 
{
	int t;
	cin>>t;
	for(int u=0;u<t;u++)
	{
	    int a,s;
	    cin>>a;
	    for(int i=a+1;;i++)
	    {
	        if(sumdigit(a)%2!=sumdigit(i)%2)
	        {
	            cout<<i<<endl;
	            break;
	        }
	    }
	}
}
