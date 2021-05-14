//author:Siddharth Akar
#include<bits/stdc++.h>
#define ull 		    unsigned long long int 
#define ll 			    long long 
#define lli 		    long long int  
#define li 			    long int 
#define endl 		    "\n"
#define lb              lower_bound
#define ub              upper_bound
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
    int n;
    cin>>n;
    vector<string>v[17];
    v[1]={"0","1"};
    for(int i=2;i<=n;i++){
        for(int j=0;j<v[i-1].size();j++){
            v[i].pb(v[i-1][j]);
        }
        for(int j=v[i-1].size()-1;j>=0;j--){
            v[i].pb(v[i-1][j]);
        }
        rep(j,v[i].size()/2){
            string r=v[i][j];
            REVERSE(r);
            r+='0';
            REVERSE(r);
            v[i][j]=r;
        }
        repk(j,v[i].size()/2,v[i].size()){
            string r=v[i][j];
            REVERSE(r);
            r+='1';
            REVERSE(r);
            v[i][j]=r;
        }
    }
    rep(i,v[n].size())
        cout<<v[n][i]<<"\n";

	return 0;
}
