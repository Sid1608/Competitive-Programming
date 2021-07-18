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

//Recurcive Solution
ll solve(vector<ll>h,vector<ll>s,ll x,ll n ){
  if(n<0)
    return 0;
  if(h[n-1]<=x){
 
    return max(s[n-1]+solve(h,s,x-h[n-1],n-1),solve(h,s,x,n-1));
  }
  else{
    return solve(h,s,x,n-1);
  }
}
int main() {
  fast;
  #ifndef ONLINE_JUDGE
  //for getting input from input.txt
  freopen("input.txt","r",stdin);
  //for writing output to output.txt
  freopen("output.txt","w",stdout);
  #endif
    fast;
    int n,x;
    cin>>n>>x;
    vector<int> h(n+1),s(n+1);
    rep(i,n)cin>>h[i];
    rep(i,n)cin>>s[i];
    int dp[n+1][x+1];
    //Iterative Solution
    for(int i=0;i<=n;i++){
      for(int j=0;j<=x;j++){
        if(i==0||j==0)
          dp[i][j]=0;
        else if(h[i-1]<=j){
          dp[i][j]=max(s[i-1]+dp[i-1][j-h[i-1]],dp[i-1][j]);
        }
        else{
          dp[i][j]=dp[i-1][j];
        }
      }
    }
    cout<<dp[n][x];
  return 0;
}