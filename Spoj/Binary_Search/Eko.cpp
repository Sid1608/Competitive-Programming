//author:Siddharth Akar
//problem link:https://www.spoj.com/problems/EKO/

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

ll n,m;
ll a[1000000];
bool isValid(ll h){
    ll got=0;
    rep(i,n){
        if(a[i]>=h){
            got+=(a[i]-h);
        }
    }
    if(got>=m)
        return true;
    return false;
}
int main() {
    fast;
    cin>>n>>m;
    rep(i,n)
        cin>>a[i];
    ll x=*max_element(a,a+n);
    ll l=0,h=x,res=-1;
    while(l<=h){
        ll mid=(l+h)/2;
        if(isValid(mid)){
            l=mid+1;
            res=max(mid,res);
        }
        else{
            h=mid-1;
        }
    }
    cout<<res;

	return 0;
}
