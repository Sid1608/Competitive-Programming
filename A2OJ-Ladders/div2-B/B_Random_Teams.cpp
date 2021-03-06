#include<bits/stdc++.h>
#define ll unsigned long long int  
#define li long int 
#define fi first 
#define se second 
#define mp make_pair 
#define pb push_back 
#define ALL(v) v.begin(), v.end() 
#define foi(i,k,n) for(int i=k;i<n;i++)
#define foll(i,k,n) for(ll i=k;i<n;i++)
#define foli(i,k,n) for(li i=k;i<n;i++)
#define rfoll(i,k,n) for(ll i=k;i>n;i--)
#define reset(a, b) memset(a, b, sizeof(a)) 
#define ALLA(arr, sz) arr, arr + sz 
#define SORT(v) sort(ALL(v)) 
#define REVERSE(v) reverse(ALL(v))  
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz)) 
#define TC(t) while (t--) 
const unsigned int M = 1000000007;
using namespace std;
int  nCr(int n, int r)
{
    if (r == 0) return 1;
    if (r > n / 2) return nCr(n, n - r); 

    long res = 1; 

    for (int k = 1; k <= r; ++k)
    {
        res *= n - k + 1;
        res /= k;
    }

    return res;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,m,kmax,kmin;
    cin>>n>>m;
    if(n%m==0){
        kmin=m*nCr(n/m,2);
        cout<<kmin<<" ";
    }
    else{
        ll x=n/m;
        ll y=n%m;
        kmin=((m-y)*nCr(x,2))+(y*nCr(x+1,2));
        cout<<kmin<<" ";
    }    
    n=n-m;
    kmax=nCr(n+1,2);
    cout<<kmax<<" ";

}