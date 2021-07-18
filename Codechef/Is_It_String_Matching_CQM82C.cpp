//Author:siddharth akar
// problem link:https://www.codechef.com/CQM2021/problems/CQM82C

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
    ll t;
	cin>>t;
	while(t--)
	{
	    ll n,m;
	    cin>>n>>m;
	    string a,b;
	    cin>>a>>b;
	    unordered_map<char,ll>p,q;
	    rep(i,m){
	        p[b[i]]++;
	    }
	    rep(i,m){
	        q[a[i]]++;
	    }
	    ll ans=0,g=0;
	    for(auto i:p){
            if(q[i.F]!=i.S){
                g=1;
                break;
            }
        }
        if(g==0)
            ans++;
	    ll l=0;
	    q[a[l]]--;
	    l++;
	    for(ll r=m;r<n;r++)
	    {
	        g=0;
	        q[a[r]]++;
	        for(auto i:p){
	            if(q[i.F]!=i.S){
	                g=1;
	                break;
	            }
	        }
	        if(g==0)
	            ans++;
	        q[a[l]]--;
	        l++;
	        
	    }
	    cout<<ans<<endl;
	
	}
	return 0;
}
