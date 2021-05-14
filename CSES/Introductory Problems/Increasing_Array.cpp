//author:Siddharth Akar
#include<bits/stdc++.h>
#define ull unsigned long long int 
#define ll long long int  
#define li long int 
#define endl "\n"
//const unsigned int M = 1000000007;
#define loop(i,n,k) for(int i=k;i<n;i++)
#define revl(i,n,k) for(int i=k;i>n;i--)
#define mem(a, b) memset(a, b, sizeof(a)) 
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define fi first 
#define se second 
#define mp make_pair 
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back 
#define pii pair<int,int>
#define pll pair<ll,ll>
#define TC(t) while (t--) 
using namespace std;
int main() {
    fast;
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll m=0;
    for(ll i=1;i<n;i++)
    {
        if(a[i]<a[i-1]){
            m+=a[i-1]-a[i];
			a[i]=a[i-1];
		}
        
    }
    cout<<m;
	return 0;
}