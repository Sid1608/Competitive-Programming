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


int dp[5001][5001];
//recurcive solution
int solve(string& r,string& s,int n,int m,int i,int j){
	if(i==0||j==0){
		return i+j;
	}
	if(dp[i][j]!=-1)
		return dp[i][j];
	if(r[i-1]==s[j-1]){
		return dp[i][j]=solve(r,s,n,m,i-1,j-1);
	}
	else{
		return dp[i][j]=min(1+solve(r,s,n,m,i-1,j-1),min(1+solve(r,s,n,m,i,j-1),1+solve(r,s,n,m,i-1,j)));
	}
}
int main()
{
	fast;
	string r,s;
	cin>>r>>s;
	int n=r.size(),m=s.size();
	
	memset(dp,-1,sizeof(dp));
	//iterative 
	for(int i=0;i<=n;i++){
	// 	for(int j=0;j<=m;j++){
	// 		if(i==0||j==0)
	// 			dp[i][j]=i+j;
	// 		else if(r[i-1]==s[j-1]){
	// 			dp[i][j]=dp[i-1][j-1];
	// 		}
	// 		else{
	// 			dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
	// 		}

	// 	}
	// }
	// cout<<dp[n][m];
	cout<<solve(r,s,n,m,n,m);
	return 0;
}
