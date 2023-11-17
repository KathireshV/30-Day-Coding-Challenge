class Solution {
public:
string convert(string s, int numRows) {
        int n=s.length();
        char arr[numRows][n];
        string str="";
        int a=0,i=0,j=0,k=0,flag=0;
        for(int a=0;a<n;a++)
        {
            arr[i][j]=s[a];
            if(i==0)
            {
                flag=1;
            }
            if(i==numRows-1)
            {
                flag=0;
            }
            if(flag==0)
            {
                i--;
                j++;
            }
            if(flag==1)
            {
                i++;
            }
        }
        
        for(int i=0;i<numRows;i++)
        {
            for(int k=0;k<=j;k++)
            {
                if(arr[i][k]>='A' && arr[i][k]<='Z')
                str+=arr[i][k];
            }
        }
       
    return str;
    
}
};
