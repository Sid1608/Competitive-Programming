#include<bits/stdc++.h>
#define ull unsigned long long int 
//#define ll long long 
#define ll long long int  
#define li long int 
#define endl "\n"
const unsigned int M = 1000000007;
#define rep(i,n)  for(ll i=0;i<n;i++)
#define repd(i,n) for(int i=n-1;i>=0;i--)
#define reset(a, b) memset(a, b, sizeof(a)) 
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define F first 
#define S second 
#define all(v) v.begin(), v.end()
#define ALLA(arr, sz) arr, arr + sz 
#define SORT(v) sort(all(v)) 
#define REVERSE(v) reverse(all(v))  
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz)) 
#define mp make_pair 
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back 
#define pii pair<int,int>
#define pll pair<ll,ll>
#define TC(t) while (t--) 
using namespace std;
int main() {
    fast;
    ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,k;
		cin>>a>>b>>k;
        ll bo[k],g[k];
        map<ll,ll>boys,girls,fg,fb;
        
        rep(i,k){
            cin>>bo[i];
            boys[bo[i]]++;
        }
        rep(i,k){
            cin>>g[i];
            girls[g[i]]++;
        }
        if(k==1){
            cout<<0<<"\n";
        }
        else{
            ll dis_pairs=0;
            rep(i,k){
                fg[g[i]]++;
                fb[bo[i]]++;
                ll c=boys[bo[i]]-fb[bo[i]];
                ll d=girls[g[i]]-fg[g[i]];
                dis_pairs+=k-(c+d)-(i+1);
            }
            cout<<dis_pairs<<"\n";
        }
        
        
		
	}
	return 0;
}