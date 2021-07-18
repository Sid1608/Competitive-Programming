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
    int n;
    cin>>n;
    char a[n][n];
    rep(i,n){
        rep(j,n)
            cin>>a[i][j];
    }
    ll dp[n+1][n+1];
    rep(i,n){
        dp[i][n]=0;
        dp[n][i]=0;
    }
    dp[n][n]=1;
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(i==n-1&&j==n-1){
                if(a[i][j]=='*')
                  dp[i][j]=0;
                else
                    dp[i][j]=1;
            }
            else{
                if(a[i][j]=='*')
                    dp[i][j]=0;
                else{
                    dp[i][j]=dp[i+1][j]+dp[i][j+1];
                    dp[i][j]=dp[i][j]%mod;
                }
            }
        }
    }
    
    cout<<dp[0][0];
	return 0;
}
