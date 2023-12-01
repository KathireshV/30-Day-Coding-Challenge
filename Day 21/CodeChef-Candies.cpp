#include <iostream>
using namespace std;

int main() 
{
	int t,n;
	cin>>t;
	for(int u=0;u<t;u++)
	{
	    cin>>n;
	    int arr[n*2];
	    for(int i=0;i<2*n;i++)
	    {
	        cin>>arr[i];
	    }
	    int c=0,count=0;
	    for(int i=0;i<2*n;i++)
	    {
	        count=0;
	        for(int j=0;j<2*n;j++)
	        {
	            if(arr[i]==arr[j])
	            {
	                count++;
	            }
	        }
	        if(count>2)
	        {
	            cout<<"No"<<endl;
	            c=1;
	            break;
	        }
	    }
	    if(c==0)
	    {
	        cout<<"Yes"<<endl;
	    }
	}
}
