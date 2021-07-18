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
    map<int,char>p;
    char y='A';
    for(int i=1;i<=26;i++){
        p[i]=y;
        y++;
    }
    fast;
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll a[s.size()];
    rep(i,s.size()){
        int x=s[i];
        a[i]=x%64;
    }
    if(k==2){
        ll ans1=0,ans2=0;   
        rep(i,s.size()){
            if(i%2==0){
                if(a[i]!=1)ans1++;
            }
            else{
                if(a[i]!=2)ans1++;
            }
        }
        rep(i,s.size()){
            if(i%2==0){
                if(a[i]!=2)ans2++;
            }
            else{
                if(a[i]!=1)ans2++;
            }
        }
        if(ans1<ans2){
            cout<<ans1<<"\n";
            rep(i,s.size()){
               if(i&1)
                    cout<<p[2];
               else
                    cout<<p[1];
            }
        }
        else{
            cout<<ans2<<"\n";
            rep(i,s.size()){
                if(i&1)
                    cout<<p[1];
                else
                    cout<<p[2];
            }
        }
    }
    else{
        ll ans=0;
        rep(i,s.size()){
            if(a[i]==a[i-1]){
                for(int j=0;j<k;j++){
                    int ch=1+j;
                    if((ch!=a[i-1])&&(ch!=a[i+1])){
                        a[i]=1+j;
                        ans++;
                        break;
                    }
                }
            }
        }
        cout<<ans<<"\n";
        rep(i,s.size()){
            cout<<p[a[i]];
        }
    }
	return 0;
}
