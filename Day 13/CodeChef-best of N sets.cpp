int main() 
{
    int n;
    cin>>n;
    int a,b;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(b>a)
        {
            cout<<(b*2)-1<<endl;
        }
        else
        {
            cout<<(a*2)-1<<endl;
            
        }
    }
	return 0;
}

