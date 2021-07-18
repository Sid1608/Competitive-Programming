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
    string n,m;
    cin>>n>>m;
    unordered_map<char,int>p,q;
    for(int i=0;i<n.size();i++)
        p[n[i]]++;
    for(int i=0;i<m.size();i++)
        q[m[i]]++;
    int g=0,tot_area=0;
    for(auto x:q){
        if(p[x.fi]==0){
            g=1;
            break;
        }
        if(p[x.fi]<x.se){
            tot_area+=p[x.fi];
        }
        else if(p[x.fi]>=x.se){
            tot_area+=x.se;
        }

    }
    if(g==1)
        cout<<-1;
    else
        cout<<tot_area;
    
    
	return 0;
}