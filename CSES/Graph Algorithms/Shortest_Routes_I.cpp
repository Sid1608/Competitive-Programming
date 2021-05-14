#include<bits/stdc++.h>
#define ull 		    unsigned long long int 
#define ll 			    long long 
#define lli 		    long long int  
#define li 			    long int 
#define endl 		    "\n"
#define lb              lower_bound
#define ub              upper_bound
#define pi              acos(-1)
#define rep(i,n)  	    for(int i=0;i<n;i++)
#define repk(i,k,n)     for(int i=k;i<n;i++)
#define repd(i,n) 	    for(int i=n-1;i>=0;i--)
#define mod             1000000007
#define reset(a, b)     memset(a, b, sizeof(a)) 
#define gcd(a,b) 	    __gcd(a,b)
#define lcm(a,b) 	    (a*b)/gcd(a,b)
#define F 			    first 	
#define S 			    second 
#define all(v) 		    v.begin(), v.end()
#define SORT(v) 	    sort(all(v)) 
#define asort(v) 	    sort(all(v)) 
#define dsort(v) 	    sort(all(v),greater<ll>()) 
#define REVERSE(v) 	    reverse(all(v))
#define mp 			    make_pair 
#define pb 			    push_back 
#define pii 		    pair<int,int>
#define pll 		    pair<ll,ll>
#define sz(x)           ((int)(x).size())
#define fast 	        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TC(t)           while (t--) 
using namespace std;
int main() {
    fast;
    ll n,m;
    cin>>n>>m;
    vector<pll>v[n+1];
    rep(i,m){
        ll a,b,c;
        cin>>a>>b>>c;
        v[a].pb({b,c});
    }
    vector<ll>dist(n+1,1e18);
    dist[1]=0;
    set<pll>setds;
    setds.insert({0,1});
    while(!setds.empty()){
        pll x=*(setds.begin());
        setds.erase(setds.begin());
        ll u=x.S;
        for(auto i:v[u]){
            ll v=i.F;
            ll c=i.S;
            if(c+dist[u]<dist[v]){
                if(dist[v]!=1e18)
                    setds.erase(setds.find({dist[v],v}));
                dist[v]=c+dist[u];
                setds.insert({dist[v],v});
            }
        }

    }
    repk(i,1,n+1)
        cout<<dist[i]<<" ";
   
	return 0;
}
