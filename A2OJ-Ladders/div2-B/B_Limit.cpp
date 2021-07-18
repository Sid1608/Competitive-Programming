#include<bits/stdc++.h>
#define ull unsigned long long int 
#define ll long long int  
#define li long int 
#define endl "\n"
const unsigned int M = 1000000007;
#define rep(i,n)  for(int i=0;i<n;i++)
#define repd(i,n) for(int i=n-1;i>=0;i--)
#define mem(a, b) memset(a, b, sizeof(a)) 
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define F first 
#define S second 
#define mp make_pair 
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back 
#define pii pair<int,int>
#define pll pair<ll,ll>
#define TC(t) while (t--) 
using namespace std;
int main() {
    fast;
    int n,m;
    cin>>n>>m;
    n++;
    m++;
    int a[n+1],b[m+1];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i=0;i<m;i++)
        cin>>b[i];
    ll y,z,x;
    if(m<n){
        y=a[0];
        z=0;
    }
    else if(n<m){
        y=0;
        z=b[0];
    }
    else
    {
        y=a[0];
        z=b[0];
    }
   // cout<<b[0]<<" "<<y;
    x=abs(gcd(y,z));
    y/=x;
    z/=x;
    if(y!=0&&z!=0){
        if((y<0&&z>0)||(y>0&&z<0))
            cout<<"-"<<abs(y)<<"/"<<abs(z);
        else
            cout<<abs(y)<<"/"<<abs(z);
    }
    else if(y==0)
        cout<<0<<"/"<<1;
    else{
         //cout<<b[0]<<" "<<y;
        if((y>0)&&(b[0]<0))
            cout<<"-"<<"Infinity";
        else if((y<0)&&(b[0]>0))
            cout<<"-"<<"Infinity";
        else
            cout<<"Infinity";
    }

    
	return 0;
}