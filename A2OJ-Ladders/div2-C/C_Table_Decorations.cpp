#include<bits/stdc++.h>
#define ull unsigned long long int 
#define ll  long long  
#define li  long int 
#define endl "\n"
#define lb  lower_bound
#define ub upper_bound
#define pi  acos(-1)
#define rep(i,n)  for(int i=0;i<n;i++)
#define repk(i,k,n)  for(int i=k;i<n;i++)
#define repd(i,n) 	 for(int i=n-1;i>=0;i--)
#define mod 1000000007
#define reset(a, b) memset(a, b, sizeof(a)) 
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define F first 	
#define S 	second 
#define all(v) v.begin(), v.end()
#define dsort(v) sort(all(v),greater<ll>()) 
#define REVERSE(v) reverse(all(v))
#define pb 	 push_back 
#define pii  pair<int,int>
#define pll  pair<ll,ll>
#define sz(x) ((int)(x).size())
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void solve(){
    ll r,g,b,x,y,z;
    cin>>r>>g>>b;
    priority_queue<int> s;
    s.push(r),s.push(g),s.push(b);
    x=s.top();s.pop();
    y=s.top();s.pop();
    z=s.top();s.pop();
    if(x>=(y+z)*2){
        cout<<y+z;
    }
    else{
        cout<<(x+y+z)/3;
    }

}
int main() {
    fast;
    int t=1;
   
    while(t--){
        solve();
    }
    return 0;
}
