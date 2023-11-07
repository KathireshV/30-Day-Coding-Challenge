class Solution {
    public:
    int romanToInt(string s) 
    {
        int n=s.length();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='I' && s[i+1]=='V' && i<n-1)
            {
                sum+=4;
                s[i+1]='S';
                s[i]='S';
            }
            else if(s[i]=='I' && s[i+1]=='X' && i<n-1)
            {
                sum+=9;
                s[i+1]='S';
                s[i]='S';
            }
            else if(s[i]=='X' && s[i+1]=='L' && i<n-1)
            {
                sum+=40;
                s[i+1]='S';
                s[i]='S';
            }
            else if(s[i]=='X' && s[i+1]=='C' && i<n-1)
            {
                sum+=90;
                s[i+1]='S';
                s[i]='S';
            }
            else if(s[i]=='C' && s[i+1]=='D' && i<n-1)
            {
                sum+=400;
                s[i+1]='S';
                s[i]='S';
            }
            else if(s[i]=='C' && s[i+1]=='M' && i<n-1)
            {
                sum+=900;
                s[i+1]='S';
                s[i]='S';
            }
        
            if(s[i]=='I')
            {
                sum+=1;
            }
            else if(s[i]=='V')
            {
                sum+=5;
            }
            else if(s[i]=='X')
            {
                sum+=10;
            }
            else if(s[i]=='L')
            {
                sum+=50;
            }
            else if(s[i]=='C')
            {
                sum+=100;
            }
            else if(s[i]=='D')
            {
                sum+=500;
            }
            else if(s[i]=='M')
            {
                sum+=1000;
            }
        }
        return sum;
    }
};
