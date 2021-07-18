#include<bits/stdc++.h>
#define ull 		unsigned long long int 
#define ll 			long long 
#define lli 		long long int  
#define li 			long int 
#define endl 		"\n"
#define pi          acos(-1)
#define rep(i,n)  	for(int i=0;i<n;i++)
#define repd(i,n) 	for(int i=n-1;i>=0;i--)
#define mod         1000000007
#define reset(a, b) memset(a, b, sizeof(a)) 
#define gcd(a,b) 	__gcd(a,b)
#define lcm(a,b) 	(a*b)/gcd(a,b)
#define F 			first 	
#define S 			second 
#define all(v) 		v.begin(), v.end()
#define SORT(v) 	sort(all(v)) 
#define REVERSE(v) 	reverse(all(v))
#define mp 			make_pair 
#define pb 			push_back 
#define pii 		pair<int,int>
#define pll 		pair<ll,ll>
#define sz(x)       ((int)(x).size())
#define fast 	    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TC(t)       while (t--) 
using namespace std;
vector<ll>path[101];
void dfs(ll node,int vis[]){
    vis[node]=1;
    for(ll child:path[node]){
        if(!vis[child]){
            dfs(child,vis);
        }
    }
}
int main() {
    fast;
    ll t;
	cin>>t;
    vector<pll>v;
	while(t--)
	{
        ll type;cin>>type;
        if(type==1){
            ll x,y;cin>>x>>y;
            int n=v.size();
            for(int i=0;i<n;i++){
                if((v[i].F>x&&v[i].F<y)||v[i].S>x&&v[i].S<y){
                    path[i+1].pb(n+1);
                    if((v[i].F<x&&v[i].S>x)||v[i].F<y&&v[i].S>y)
                        path[n+1].pb(i+1);
                }
            }
            v.pb({x,y});
        }
        else{
            ll a,b;cin>>a>>b;
            int vis[101]={0};
            dfs(a,vis);
            if(vis[b]==1)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
	}
	return 0;
}
