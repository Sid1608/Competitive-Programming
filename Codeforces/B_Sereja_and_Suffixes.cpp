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



int main()
{
	fast;
	ll n,m;
	cin>>n>>m;
	ll a[n];
	rep(i,n)cin>>a[i];
	ll b[n];
	set<ll>s;
	for(int i=n-1;i>=0;i--){
		s.insert(a[i]);
		b[i]=s.size();
	}
	while(m--){
		ll l;
		cin>>l;
		l--;
		cout<<b[l]<<"\n";
	}
	return 0;
}
