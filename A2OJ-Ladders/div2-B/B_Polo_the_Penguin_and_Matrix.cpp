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
    li n,m,d;
    cin>>n>>m>>d;
    li a[n*m];
    for(int i=0;i<n*m;i++)
        cin>>a[i];
    sort(a,a+n*m);
    int g=0;
    for(int i=0;i<n*m-1;i++){
        li diff=a[i+1]-a[i];
        if(diff%d!=0){
            g=1;
            break;
        }
    }
    if(g==1)
        cout<<-1;
    else
    {
        li m=INT_MAX,s;
        for(int i=0;i<n*m-1;i++){
            li req=a[i];
            s=0;
            for(int j=0;j<n*m-1;j++){
                s+=abs(a[j]-req);
            }
            m=min(m,s);
            s=0;
        }
    }
    cout<<s;
    
	return 0;
}