#include<bits/stdc++.h>
#define ull unsigned long long int 
#define ll long long int  
#define li long int 
#define endl "\n"
const unsigned int M = 1000000007;
#define rep(i,n)  for(int i=0;i<n;i++)
#define repd(i,n) for(int i=n-1;i>=0;i--)
#define mem(a, b) memset(a, b, sizeof(a)) 
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define F first 
#define S second 
#define mp make_pair 
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back 
#define pii pair<int,int>
#define pll pair<ll,ll>
#define TC(t) while (t--) 
using namespace std;
int main() {
    fast;
    li n;
    cin>>n;
    ll a[n],diff[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    diff[0]=0;
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            diff[i]=a[i-1]-a[i];
        }
        else
            diff[i]=0;
    }
    ll s=0;
    for(int i=0;i<n;i++)
        s+=diff[i];
    cout<<s;
    
	return 0;
}