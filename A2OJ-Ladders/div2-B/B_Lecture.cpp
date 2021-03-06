#include<bits/stdc++.h>
#define ll long long int  
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
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    string a[m],b[m];
    for(int i=0;i<m;i++)
        cin>>a[i]>>b[i];
    map<string ,string>p;    
    string c[n];
    for(int i=0;i<n;i++)
        cin>>c[i];
    for(int i=0;i<m;i++)
    {
        string s;
        if(a[i].size()>b[i].size())   
            s=b[i];
        else
            s=a[i];    
        p[a[i]]=s;
        p[b[i]]=s;
    }        
    for(int i=0;i<n;i++)
    {
        cout<<p[c[i]]<<" ";
    }

    return 0;
}