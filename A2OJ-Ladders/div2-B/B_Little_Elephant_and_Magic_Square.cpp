#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll c[3][3],x,y,z;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cin>>c[i][j];
    }
    x=c[0][0]+c[0][1]+c[0][2];
    y=c[1][0]+c[1][1]+c[1][2];
    z=c[2][0]+c[2][1]+c[2][2];
    ll n=min(min(x,y),z);
    if(x==n){
        c[0][0]=(z+(y-x))/2;
        c[1][1]=c[0][0]+(x-y);
        c[2][2]=c[0][0]+(x-z);
    }
    else if(y==n){
        c[1][1]=(x+(z-y))/2;
        c[0][0]=c[1][1]+(y-x);
        c[2][2]=c[1][1]+(y-z);
    }
    else {
        c[2][2]=(x+(y-z))/2;;
        c[0][0]=c[2][2]+(z-x);
        c[1][1]=c[2][2]+(z-y);
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<c[i][j]<<" ";
        cout<<"\n";
    }

    1
4 4
..*.
....
*...
.*..
    return 0;
}