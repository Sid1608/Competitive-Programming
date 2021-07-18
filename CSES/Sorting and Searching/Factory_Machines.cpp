//Author:Siddharth Akar
//logic:use binary search to find the minimum time.

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

ll n,t;//n-no of machines//t-no of products req
ll tme[1000000];
bool good(ll tt){
     ll cnt=0;
     rep(i,n){
          cnt+=min(tt/tme[i],(ll)1e9);
     }
     if(cnt>=t)
          return true;
     return false;
}
int main() {
    fast;
    cin>>n>>t;
    rep(i,n)
       cin>>tme[i];
    ll l=1,r=1e18,res=1e18;
    while(l<=r){
         ll mid=(l+r)/2;
         if(good(mid)){
              r=mid-1;
              res=min(res,mid);
         }
         else{
              l=mid+1;
         }
 
    }
    cout<<res;
 
    return 0;
}