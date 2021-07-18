//Author:Siddharth Akar
//problem link:https://codeforces.com/edu/course/2/lesson/7/1/practice/contest/289390/problem/B

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


ll par[100001],r[100001],mini[100001],maxi[100001];
ll find(ll n){
    if(par[n]<0)
        return n;
    return par[n]=find(par[n]);
}
void merge(ll a,ll b){
    a=find(a);
    b=find(b);
    if(a==b)
        return ;
    if(r[a]>=r[b]){
        par[b]=a;
        r[a]+=r[b];
        mini[a]=min(mini[a],mini[b]);
        maxi[a]=max(maxi[a],maxi[b]);
    }
    else{
        par[a]=b;
        r[b]+=r[a];
        mini[b]=max(mini[a],mini[b]);
        maxi[b]=max(maxi[a],maxi[b]);
    }
}
int main() {
    fast;
    ll n,m;
    cin>>n>>m;
    repk(i,1,n+1)
        par[i]=-1,r[i]=1,mini[i]=i,maxi[i]=i;
    while(m--){
        string r;
        cin>>r;
        ll x,y;
        if(r=="union"){
            cin>>x>>y;
            merge(x,y);
        }
        else{
            cin>>x>>y;
            x=find(x);
            y=find(y);
            cout<<
        }
    }
    
	return 0;
}
