/*
	Author:@Siddharth Akar
	problem-link:https://codeforces.com/group/tvjpGLHbu9/contest/335869/problem/E
	


*/




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
unordered_map<int,int>p;
int s[11][11];
void solve(int i,int n,int sum,int& res){
	if(i>=n){
		res=max(res,sum);
		return;
	}
	for(int j=0;j<n;j++){
		if(p[j]==0){
			p[j]=1;
			solve(i+1,n,sum+s[i][j],res);
			p[j]=0;
		}
	}
}
int main()
{
	fast;
	int n;
	cin>>n;
	rep(i,n){
		rep(j,n){
			cin>>s[i][j];
		}
	}
	int res=INT_MIN;
	solve(0,n,0,res);
	cout<<res;
	return 0;
}
