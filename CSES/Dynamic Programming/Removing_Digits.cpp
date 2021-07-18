//Author:Siddharth Akar
// How many steps are required to make the number equal to 0?
// On each step, you may subtract one of the digits from the number.

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
    ll n;
    cin>>n;
    ll dp[n+1];
    dp[0]=0;
    for(int i=1;i<=n;i++){
        ll m=i,maxi=INT_MIN;
        while(m!=0){
            maxi=max(maxi,m%10);
            m=m/10;
        }
        dp[i]=1+dp[i-maxi];
    }
    cout<<dp[n];
	return 0;
}
