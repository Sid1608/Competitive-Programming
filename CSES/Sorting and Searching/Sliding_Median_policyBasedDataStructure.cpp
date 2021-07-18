//author:siddharth
//logic :
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


int main() {
    fast;
    ll n,k;
    cin>>n>>k;
    ll x[n];
    rep(i,n)
        cin>>x[i];
    ordered_set st;
    rep(i,k-1)
        st.insert({x[i],i});
    ll l=0,medpos=(k-1)/2;
    for(ll r=k-1;r<n;r++)
    {
        st.insert({x[r],r});
        while(st.size()>k){
            st.erase(st.find({x[l],l}));
            l++;
        }
        pii ans=*(st.find_by_order(medpos));
        cout<<ans.F<<" ";
    }
    
	return 0;
}
