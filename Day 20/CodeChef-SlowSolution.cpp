#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int maxt,maxn,maxs,x,ans=0;
	    cin>>maxt>>maxn>>maxs;
	   
	    while(maxt-- && maxs>0)
	    {
	        if(maxs>=maxn)
	        {
	             maxs-=maxn;
	             ans+=pow(maxn,2);
	        }
	        else
	        {
	            ans+=pow(maxs,2);
	            break;
	        }
	        
	    }
	   cout<<ans<<endl;
	}
	return 0;
}
