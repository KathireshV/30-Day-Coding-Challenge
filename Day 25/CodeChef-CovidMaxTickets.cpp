#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    for(int u=0;u<t;u++)
    {
        int a,b,count=0;
        cin>>a>>b;
        for(int i=1;i<=a;i+=2)
        {
            for(int j=1;j<=b;j+=2)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}
