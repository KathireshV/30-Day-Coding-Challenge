#include <bits/stdc++.h> 
int countStories(int x, int y, int z)
{ 
    int count=0,stories=0,a=z;
    while(a>0)
    {
        a=a-y;
        if(a<0)
        {
            break;
        }
        count++;
    }
    stories=count;
    int scount=0;
    return ((z/y)+((z/y)/x));
}
