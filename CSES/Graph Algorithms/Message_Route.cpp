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
#define REVERSE(v) 	    reverse(all(v))
#define mp 			    make_pair 
#define pb 			    push_back 
#define pii 		    pair<int,int>
#define pll 		    pair<ll,ll>
#define sz(x)           ((int)(x).size())
#define fast 	        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TC(t)           while (t--) 
using namespace std;
bool Isprime (ll a) { if(a<=1) return false; if(a==2||a==3) return true; if(a%2==0||a%3==0) return false; for(ll i=5;i*i<=a;i=i+6) { if(a%i==0||a%(i+2)==0) return false; } return true;}
bool cmp(const pair<int,int> &a,const pair<int,int> &b){ //comparator
        return a.second<b.second; 
}
vector<ll>vec[1000000];
bool vis[1000000];
ll dist[1000000];
ll route[1000000];
void dfs(ll node){
    vis[node]=1;
    for(auto child: vec[node]){
        if(!vis[child]){
            dfs(child);
        }
    }
}
void bfs(ll src){
    vis[src]=1;
    route[src]=0;
    dist[src]=0;
    queue<ll>q;
    q.push(src);
    while(!q.empty()){
        ll curr=q.front();
        q.pop();
        for(auto child:vec[curr]){
            if(!vis[child]){
                vis[child]=1;
                dist[child]=dist[curr]+1;
                route[child]=curr;
                q.push(child);
            }
        }
    }
}
int main() {
    fast;
    ll n,m;
    cin>>n>>m;
    while(m--){
        ll a,b;
        cin>>a>>b;
        vec[a].pb(b);
        vec[b].pb(a);
    }
    bfs(1);
    if(dist[n]==0)
        cout<<"IMPOSSIBLE";
    else{
        vector<ll>s;
        ll x=n;
       // s.insert(route[x]);
        while(x!=0){
            s.pb(x);
            x=route[x];
        }
        cout<<dist[n]+1<<"\n";
        repd(i,s.size()){
            cout<<s[i]<<" ";
        }
    }
	return 0;
}