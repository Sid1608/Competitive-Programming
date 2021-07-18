#include<bits/stdc++.h>
#define ull unsigned long long int 
#define ll long long 
#define lli long long int  
#define li long int 
#define endl "\n"
const unsigned int M = 1000000007;
#define rep(i,n)  for(int i=0;i<n;i++)
#define repd(i,n) for(int i=n-1;i>=0;i--)
#define reset(a, b) memset(a, b, sizeof(a)) 
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define F first 
#define S second 
#define all(v) v.begin(), v.end()
#define ALLA(arr, sz) arr, arr + sz 
#define SORT(v) sort(all(v)) 
#define REVERSE(v) reverse(all(v))  
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz)) 
#define mp make_pair 
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back 
#define pii pair<int,int>
#define pll pair<ll,ll>
#define TC(t) while (t--) 
using namespace std;
int main() {
    fast;
    int n,m;
    cin>>n>>m;
    int a[n][m];
    rep(i,n){
        rep(j,m){
            char x;
            cin>>x;
            if(x=='P')
                a[i][j]=1;
            else if(x=='W')
                a[i][j]=2;
            else   
                a[i][j]=0;
        }
    }
    int eaten=0;
    rep(i,n){
        rep(j,m){
            if(a[i][j]==2){
                if(i-1>=0){
                    if(a[i-1][j]==1)
                    {
                        a[i-1][j]=0;
                        eaten++;
                        continue;
                    }
                }
                if(j-1>=0){
                    if(a[i][j-1]==1)
                    {
                        a[i][j-1]=0;
                        eaten++;
                        continue;
                    }
                }
                if(i+1<=n-1){
                    if(a[i+1][j]==1)
                    {
                        a[i+1][j]=0;
                        eaten++;
                        continue;
                    }
                }
                if(j+1<=m-1){
                    if(a[i][j+1]==1)
                    {
                        a[i][j+1]=0;
                        eaten++;
                        continue;
                    }
                }
            }
        }
    }
    cout<<eaten;
	return 0;
}
