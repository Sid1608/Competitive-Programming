Author:Siddharth Akar

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
	ll t;
	//cin >> t;
	t=1;
	while (t--)
	{
		ll n,k,s=0,ans;
		cin>>n>>k;
		ll h[n],pref[n];
		rep(i,n)cin>>h[i];
		pref[0]=h[0];
		repk(i,1,n)
			pref[i]=pref[i-1]+h[i];
		s=pref[k-1];
		ans=0;
		repk(i,1,n){
			if(i+k-1>=n)break;

			if(pref[i+k-1]-pref[i-1]<s){
				s=pref[i+k-1]-pref[i-1];
				ans=i;
			}
		}
		cout<<ans+1;
	}
	return 0;
}
