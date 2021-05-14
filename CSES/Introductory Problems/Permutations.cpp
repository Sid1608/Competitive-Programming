//author:Siddharth Akar
#include<bits/stdc++.h>
#define ull unsigned long long int 
#define ll long long int  
#define li long int 
#define endl "\n"
//const unsigned int M = 1000000007;
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
    ll n;
    cin>>n;
    if(n==2||n==3)
        cout<<"NO SOLUTION";
    else{
        for(int i=2;i<=n;i+=2)
            cout<<i<<" ";
        for(int i=1;i<=n;i+=2)
            cout<<i<<" ";
    }
	return 0;
}