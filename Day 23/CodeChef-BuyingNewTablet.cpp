#include <iostream>
using namespace std;

int main() 
{
    int t,n,cash;
    cin>>t;
    for(int u=0;u<t;u++)
    {
        cin>>n>>cash;
        int w[n];
        int h[n];
        int p[n];
        int max=0,c=0;
        for(int i=0;i<n;i++)
        {
            cin>>w[i]>>h[i]>>p[i];
            if(p[i]<=cash && (w[i]*h[i])>max)
            {
                max=w[i]*h[i];
                c=1;
            }
        }
        if(c==0)
        {
            cout<<"no tablet"<<endl;
        }
        else
        {
            cout<<max<<endl;
        }
    }

}
