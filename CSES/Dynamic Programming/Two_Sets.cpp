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

int main() {
    fast;
    ll n;
    cin>>n;
    ll x=((n)*(n+1))/2;
    if(x%2==0)
    {
        cout<<"YES\n";
        ll sum=x/2;
        ll b[n];
        vector<ll>r,s;
        rep(i,n){
            b[i]=1;
        }
        ll c=n;
        while(1){
            if(sum-c>0){
                sum-=c;
                b[c-1]=2;
                c--;
            }
            else{
                b[sum-1]=2;
                break;
            }
        }
        rep(i,n){
            if(b[i]==1)
                r.pb(i+1);
            else 
                s.pb(i+1);
        }
        cout<<r.size()<<"\n";
        rep(i,r.size())
            cout<<r[i]<<" ";
        cout<<"\n";
        cout<<s.size()<<"\n";
        rep(i,s.size())
            cout<<s[i]<<" ";
        cout<<"\n";

    }
    else
        cout<<"NO";
	return 0;
}
