#include<bits/stdc++.h>
#define ull 		    unsigned long long int 
#define ll 			    long long 
#define lli 		    long long int  
#define li 			    long int 
#define endl 		    "\n"
#define pi              acos(-1)
#define rep(i,n)  	    for(int i=0;i<n;i++)
#define repk(i,k,n)     for(int i=k;i<n;i++)
#define repd(i,n) 	    for(int i=n-1;i>=0;i--)
#define mod             1000000007
#define reset(a, b)     memset(a, b, sizeof(a)) 
#define gcd(a,b) 	    __gcd(a,b)
#define lcm(a,b) 	    (a*b)/gcd(a,b)
#define F 			    first 	
#define S 			    second 
#define all(v) 		    v.begin(), v.end()
#define SORT(v) 	    sort(all(v)) 
#define REVERSE(v) 	    reverse(all(v))
#define mp 			    make_pair 
#define pb 			    push_back 
#define pii 		    pair<int,int>
#define pll 		    pair<ll,ll>
#define sz(x)           ((int)(x).size())
#define fast 	        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TC(t)           while (t--) 
using namespace std;
bool Isprime (ll a) { if(a<=1) return false; if(a==2||a==3) return true; if(a%2==0||a%3==0) return false; for(ll i=5;i*i<=a;i=i+6) { if(a%i==0||a%(i+2)==0) return false; } return true;}

int main() {
    fast;
    int n,gx,gy;
    cin>>n>>gx>>gy;
    int ans=0,s=0,t=0;
    set<double>set;
    rep(i,n){
        int x,y;
        cin>>x>>y;
        if(x==gx){
            s==0?ans++:s=1;
            s=1;
        }
        else if(y==gy){
            t==0?ans++:t=1;
            t=1;
        }
        else{
            double b=(double)(y-gy)/(x-gx);
            set.insert(b);
        }

    }
    // for(auto g:set)
    //     cout<<g<<" ";
  //  cout<<set.size()<<" ";
    ans+=set.size();
    cout<<ans;
	return 0;
}
