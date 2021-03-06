#include<bits/stdc++.h>
#define ull unsigned long long int 
#define ll long long int  
#define li long int 
#define endl "\n"
const long long int M = 1000000007;
#define loop(i,n,k) for(int i=k;i<n;i++)
#define revl(i,n,k) for(int i=k;i>n;i--)
#define mem(a, b) memset(a, b, sizeof(a)) 
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define fi first 
#define se second 
#define mp make_pair 
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back 
#define pii pair<int,int>
#define pll pair<ll,ll>
#define TC(t) while (t--) 
using namespace std;
int main() {
    fast;
       ll x,y;
       cin>>x>>y;
       ll n;
       cin>>n;
       ll f[7];
       f[1]=x;
       f[2]=y;
       for(ll i=2;i<6;i++){
           f[i+1]=((f[i])%M-(f[i-1])%M)%M;
       }
       ll z=n%6;
       if(z==0)
            z=6;
       if(f[z]<0)
            cout<<M+f[z];
       else
         cout<<f[z]%M;
	return 0;
}