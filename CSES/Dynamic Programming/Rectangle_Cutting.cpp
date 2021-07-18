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

int dp[501][501];
int solve(int n,int m){
	if(n==m)
		return 0;
	if(dp[n][m]!=-1)return dp[n][m];
	int op1=INT_MAX,op2=INT_MAX;
	for(int i=1;i<=n/2;i++){
		int temp1=1+solve(i,m)+solve(n-i,m);
		op1=min(op1,temp1);
	}
	for(int i=1;i<=m/2;i++){
		int temp2=1+solve(n,i)+solve(n,m-i);
		op2=min(op2,temp2);
	}
	return dp[n][m]=min(op1,op2);
}
int main()
{
	fast;
	int n,m;
	cin>>n>>m;
	memset(dp,-1,sizeof(dp));
	int ans=solve(n,m);
	cout<<ans;
	return 0;
}
