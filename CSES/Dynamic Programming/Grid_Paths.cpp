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
#define asort(v) 	    sort(all(v)) 
#define dsort(v) 	    sort(all(v),greater<ll>()) 
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
//for (auto &i : v) cin >> i;
int main() {
    fast;
    int n;
    cin>>n;
    char a[n][n];
    rep(i,n){
        rep(j,n)
            cin>>a[i][j];
    }
    ll dp[n+1][n+1];
    rep(i,n){
        dp[i][n]=0;
        dp[n][i]=0;
    }
    dp[n][n]=1;
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(i==n-1&&j==n-1){
                if(a[i][j]=='*')
                  dp[i][j]=0;
                else
                    dp[i][j]=1;
            }
            else{
                if(a[i][j]=='*')
                    dp[i][j]=0;
                else{
                    dp[i][j]=dp[i+1][j]+dp[i][j+1];
                    dp[i][j]=dp[i][j]%mod;
                }
            }
        }
    }
    
    cout<<dp[0][0];
	return 0;
}
