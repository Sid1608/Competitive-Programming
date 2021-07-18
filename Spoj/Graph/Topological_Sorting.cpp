//Author:Siddharth Akar

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ull unsigned long long int
#define ll long long
#define li long int
#define endl "\n"
#define rep(i, n) for (int i = 0; i < n; i++)
#define repk(i, k, n) for (int i = k; i < n; i++)
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define F first
#define S second
#define all(v) v.begin(), v.end()
#define pb push_back
#define vi vector<int>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<pii>
#define fast ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define pbds tree<int, null_type, less, rb_tree_tag, tree_order_statistics_node_update>
using namespace __gnu_pbds;
using namespace std;

bool Isprime (ll a) { if(a<=1) return false; if(a==2||a==3) return true; if(a%2==0||a%3==0) return false; for(ll i=5;i*i<=a;i=i+6) { if(a%i==0||a%(i+2)==0) return false; } return true;}
//for (auto &i : v) cin >> i;

vector<ll>v[1000001];
ll indeg[1000001];
vector<ll>ans;
void topsort(ll n){
   priority_queue<int, vector<int>, greater<int> >q;
   repk(i,1,n+1){
        if(indeg[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        ll curr=q.top();
        ans.pb(curr);
        q.pop();
        for(auto x:v[curr]){
            indeg[x]--;
            if(indeg[x]==0){
                q.push(x);
            }

        }

    }
    int g=0;
    repk(i,1,n+1){
        if(indeg[i])
        {
            g=1;
            break;
        }
    }
    if(g==1)
        cout<<"Sandro fails.";
    else{
        rep(i,ans.size())
            cout<<ans[i]<<" ";
    }

}
void solve(){
    ll n,m;
    cin>>n>>m;
    while(m--){
        ll x,y;
        cin>>x>>y;
        v[x].pb(y);
        indeg[y]++;
    }
    topsort(n);

}
int main() {
    fast;
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}