#include<bits/stdc++.h>
#define ull    unsigned long long int 
#define ll     long long  
#define li     long int 
#define endl   "\n"
#define lb     lower_bound
#define ub     upper_bound
#define pi     acos(-1)
#define rep(i,n)     for(int i=0;i<n;i++)
#define repk(i,k,n)  for(int i=k;i<n;i++)
#define repd(i,n) 	 for(int i=n-1;i>=0;i--)
#define mod 1000000007
#define reset(a, b)  memset(a, b, sizeof(a)) 
#define gcd(a,b)     __gcd(a,b)
#define lcm(a,b)    (a*b)/gcd(a,b)
#define F    first 	
#define S 	 second 
#define all(v)    v.begin(), v.end()
#define dsort(v) sort(all(v),greater<ll>()) 
#define REVERSE(v) reverse(all(v))
#define pb 	 push_back 
#define pii  pair<int,int>
#define pll  pair<ll,ll>
#define sz(x) ((int)(x).size())
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ull getSum(ll n) //this function returns the sum of all digits of a number
 { 
    ull sum; 
    for (sum = 0; n > 0; sum += n % 10, n /= 10); 
    return sum; 
 } 
void solve(){
    ull n;
    cin>>n;
    while(1){
        if(gcd(n,getSum(n))>1){
            cout<<n<<"\n";
            break;
        }
        n++;
    }
}
int main() {
    fast;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
