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

vector<int>ar[100000];
vector<int>vis(100000,0);
vector<int>dist(100000,0);
void dfs(int node,int dd){
    vis[node]=1;
    dist[node]=dd;
    for(auto child:ar[node]){
        if(!vis[child])
            dfs(child,dd+1);
    }
}
int main()
{
    int n;
    cin>>n;
    int i=n-1;
    while(i--)
    {
        int u,v;
        cin>>u>>v;
        ar[u].push_back(v);
        ar[v].push_back(u);
    }
    int m=-1;
    for(int i=1;i<=n;i++){
        dfs(i,0);
       m=max(maxi(dist),m);
       dist.clear();
       vis.clear();
    }
    cout<<m<<"\n";
    return 0;
}