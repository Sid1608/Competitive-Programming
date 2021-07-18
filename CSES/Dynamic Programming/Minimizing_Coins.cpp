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

int main() {
    fast;
    int n,target;
    cin>>n>>target;
    int coin[n];
    rep(i,n)cin>>coin[i];
    int dp[n+1][target+1];
    rep(i,n+1)
      dp[i][0]=0;
    rep(i,target+1)
      dp[0][i]=INT_MAX;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=target;j++){
        if(coin[i-1]<=j){
          dp[i][j]=(min(dp[i-1][j],1+dp[i][j-coin[i-1]]))%mod;

        }
        else{
          dp[i][j]=(dp[i-1][j])%mod;
        }
      }
    }
    if(dp[n][target]>target)
    	cout<<"-1";
    else 
    	cout<<dp[n][target];
  return 0;
}
