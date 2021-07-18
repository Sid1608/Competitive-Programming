#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c,k;
    cin>>n>>m;
    if(n%2==0)
    {
        c=n/2;
        k=c%m;
        if(k!=0)
            k=m-k;
        k<=c?cout<<c+k:cout<<-1;
    }
    else
    {
        c=n/2+1;
        k=c%m;
        if(k!=0)
            k=m-k;
        k<=(c-1)?cout<<c+k:cout<<-1;
    }

    return 0;
}