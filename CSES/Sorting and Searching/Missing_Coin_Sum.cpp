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
    ll n;
    cin>>n;
    vector<ll>a(n);//1 2 2 7 9
    //ll prevSum[n];
    rep(i,n)
        cin>>a[i];
    ll spi=1;
    sort(all(a));
    for(ll i=0;i<n&&a[i]<=spi;i++){
        spi+=a[i];
    }
    cout<<spi;
      //  prevSum[i]=a[i];
    // }
    // map<ll,ll>count;
    // sort(prevSum,prevSum+n);
    // count[0]=1;count[prevSum[0]]++;
    // repk(i,1,n){
    //     prevSum[i]+=prevSum[i-1];
    //     count[prevSum[i]]++;
    // }
    // ll spi=1,get=0;;
    // rep(i,n){
    //     if(count[prevSum[i]-spi]>=1){
    //         spi++;
    //         if(count[prevSum[i]-spi]>=1)
    //             spi++;
    //     }
    //     else{
    //         break;
    //     }
    // }
    // cout<<spi;
	return 0;
}
