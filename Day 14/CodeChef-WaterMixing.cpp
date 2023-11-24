#include <iostream>
using namespace std;

int main() 
{
    int n,ini,res,hot,cold,c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ini>>res>>hot>>cold;
        c=0;
        if(res>ini)
        {
            while(hot>0)
            {
                ini=ini+1;
                hot--;
                if(ini==res)
                {
                    cout<<"YES"<<endl;
                    c=1;
                    hot=-1;
                }
            }
            if(c==0)
            {
                cout<<"NO"<<endl;
            }
        }
        else if(res<ini)
        {
            while(cold>0)
            {
                ini=ini-1;
                cold--;
                if(ini==res)
                {
                    cout<<"YES"<<endl;
                    c=1;
                    cold=-1;
                }
            }
            if(c==0)
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
	return 0;
}
