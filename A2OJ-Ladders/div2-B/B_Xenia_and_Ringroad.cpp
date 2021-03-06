#include <bits/stdc++.h>
using namespace std;
typedef long int ll;
int main() {
    ll n,m,b,t=0;
    cin>>n>>m;
    ll a[100000];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    b=1;    
    for(ll i=0;i<m;i++)
    {
        if(a[i]<b)
        {
            t=t+(n-b)+1;
            b=1;
        }
        t=t+(a[i]-b);
        b=a[i];
    }
    cout<<t;
	return 0;
}