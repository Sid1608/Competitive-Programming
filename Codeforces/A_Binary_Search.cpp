
#include<bits/stdc++.h>
#define ull unsigned long long int 
#define ll  long long 
#define lli long long int  
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
#define SORT(v) sort(all(v)) 
#define asort(v) sort(all(v)) 
#define dsort(v) sort(all(v),greater<ll>()) 
#define REVERSE(v) reverse(all(v))
#define mp 	 make_pair 
#define pb 	 push_back 
#define pii  pair<int,int>
#define pll  pair<ll,ll>
#define sz(x) ((int)(x).size())
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TC(t)  while (t--) 
using namespace std;
bool Isprime (ll a) { if(a<=1) return false; if(a==2||a==3) return true; if(a%2==0||a%3==0) return false; for(ll i=5;i*i<=a;i=i+6) { if(a%i==0||a%(i+2)==0) return false; } return true;}
//for (auto &i : v) cin >> i;
int bins(ll x,vector<ll>v){
    ll l=0,h=v.size()-1;
    ll ch=0;
    while(l<=h){
        ll mid=l+(h-l)/2;
        if(x<v[mid]){
            h=mid-1;
        }
        else if(x>v[mid]){
            l=mid+1;
        }   
        else{
            ch=1;
            break;
        }

    }
    if(ch)
        return 1;
    return 0;
}
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    rep(i,n)cin>>a[i];
    while(k--){
        ll q;
        cin>>q;
        ll l=0,h=n-1;
        ll ch=0;
        while(l<=h){
            ll mid=l+(h-l)/2;
            if(q<a[mid]){
                h=mid-1;
            }
            else if(q>a[mid]){
                l=mid+1;
            }   
            else{
                ch=1;
                break;
            }
        }
        ch==1?cout<<"YES\n":cout<<"NO\n";
    }
    
}
int main() {
    fast;
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
