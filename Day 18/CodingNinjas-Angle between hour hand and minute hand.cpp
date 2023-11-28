#include <bits/stdc++.h> 
int findAngle(int hour, int minute) 
{
    double a=((double)11/(double)2)*((double)minute);
    double b=((double)30)*((double)hour);
    double angle=abs(b-a);
    angle=min(angle,360.0-angle);

    double c=floor(angle);
    return c;
}
