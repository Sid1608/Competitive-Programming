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
#define all(v) v.begin(), v.end()
#define mp make_pair 
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back 
#define pii pair<int,int>
#define pll pair<ll,ll>
#define TC(t) while (t--) 
using namespace std;
int main() {
    fast;
    ll n;
    cin>>n;
    string s=to_string(n);
    int m=s.size();
    vector<string>dp(11);
    for(int i=2;i<=10;i+=2){
        string e="";
        for(int i=0;i<m/2;i++)
            e+="4";
        for(int i=0;i<m/2;i++)
            e+="7";
        dp[i]=e;
    }
    if(m%2==0){
        string g=dp[m];
        reverse(all(g));
        if(s<g){
            reverse(all(g));
            int d=0;
            for(int i=0;i<m;i++){
                if(g[i]<s[i]){
                    swap(g[i],g[m/2+d]);
                    d++;
                }
            }
            cout<<g;
        }
        else if(s==g)
            cout<<g;
        else
            cout<<dp[m+2];
    }
    else{
        string h=dp[m+1];
        cout<<h;
    }

	return 0;
}