//author:Siddharth Akar
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
    ll n;
    cin>>n;
    ll k[n+1];
    map<ll,pll>p;//map of pair
    repk(i,1,n+1){
        cin>>k[i];
        p[k[i]]={0,0};
    }
    ll ans=1,t=0,c=1,i;//c denotes starting
    for(i=1;i<n+1;i++){
        if(p[k[i]].F!=0&&p[k[i]].S!=0){//check if elements is already recognzed or not
            if(p[k[i]].S>=c){// if index of previously recognized element is less than c then simply updadate
                ans=max(ans,i-c);
                c=p[k[i]].S+1;
                p[k[i]]={1,i};
            }
            else    
                p[k[i]]={1,i};
        }
        else
            p[k[i]]={1,i};
    }
    ans=max(ans,i-c);//checking 
    cout<<ans;
    
	return 0;
}
