#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    char a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cin>>a[i][j];
    }
    int x[c]={0},y[r]={0};
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]=='S')
            {
                x[j]=1;
                y[i]=1;
               // break;
            }
        }
    }
    int f=0,g=0;
        for(int i=0;i<c;i++)
        {
            if(x[i]==0)
                f++;
        }
        for(int i=0;i<r;i++)
        {
            if(y[i]==0)
                g++;
        }
      //cout<<g<<f<<r<<c<<"\n";
        cout<<(g*c-f*g)+f*r<<"\n";
    return 0;
}