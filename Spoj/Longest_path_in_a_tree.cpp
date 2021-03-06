#include<bits/stdc++.h>
#define ll long long int  
#define li long int 
#define fi first 
#define se second 
#define mp make_pair 
#define pb push_back 
#define all(v) v.begin(), v.end() 
#define reset(a, b) memset(a, b, sizeof(a)) 
#define ALLA(arr, sz) arr, arr + sz 
#define SORT(v) sort(ALL(v)) 
#define maxi(v) *max_element (all(v))
#define REVERSE(v) reverse(ALL(v))  
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define TC(t) while (t--) 
using namespace std;
vector<int>ar[100000];
// vector<int>vis(100000);
// vector<int>dist(100000);
void dfs(int node,int dd,vector<int>& vis,vector<int>& dist){
    vis[node]=1;
    dist[node]=dd;
    for(auto child:ar[node]){
        if(vis[child]==0){
            dfs(child,dd+1,vis,dist);
        }
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
    int m=-1,x;
    vector<int> vis(n + 1,0);
    vector<int> dist(n+1,0);
    dfs(1,0,vis,dist);
    m=max(maxi(dist),m);
    for(int i=1;i<=n;i++)
    {
        if(dist[i]==m)
            x=i;
    }
    for(int i=1;i<=n;i++)
    {
        vis[i]=0;
        dist[i]=0;
    }
    dfs(x,0,vis,dist);
    m=max(maxi(dist),m);
    dist.clear();
    vis.clear();
    cout<<m;
    return 0;
}