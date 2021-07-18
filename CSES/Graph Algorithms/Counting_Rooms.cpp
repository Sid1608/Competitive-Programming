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

int n,m;
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
bool vis[1001][1001];
char s[1001][1001];
int isValid(int x,int y){
     if(x<0||x>=n||y<0||y>=m)
        return 0;
     if(vis[x][y]==1||s[x][y]=='#')
        return 0;
     return 1;
}
void dfs(int x,int y)
{
    vis[x][y]=1;
    for(int i=0;i<4;i++){
        if(isValid(x+dx[i],y+dy[i])){
            dfs(x+dx[i],y+dy[i]);
        }
    }
}
int main() {
    fast;
    cin>>n>>m;
    rep(i,n){
        rep(j,m)
            cin>>s[i][j];
    }
    ll rooms=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='.'&&vis[i][j]==0)
            {
                rooms++;
                dfs(i,j);
            }
        }
    }
    cout<<rooms;

   
	return 0;
}
