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
    ll n,a1=1,b,c=0;
    cin>>n;
    ll a[n];
    vector<ll>v,s;
    foll(i,0,n){
        cin>>a[i];
        v.pb(a[i]);
    }
    sort(v.begin(),v.end());
    for(ll i=0;i<n;i++){
        if(a[i]!=v[i]){
            s.pb(i);
        }
    }
    if(s.size()==0){
        cout<<"yes"<<"\n";
        cout<<1<<" "<<1;
    }
    else{
        ll si=s[0],ei=s[s.size()-1];
        ll j=ei,f=0;
        for(ll i=si;i<=ei;i++){
           if(a[j]!=v[i]){
               cout<<"no";
               f=1;
               break;
           }
           j--;
        }
       
        if(f==0)
        {
            cout<<"yes"<<"\n";
            cout<<s[0]+1<<" "<<s[s.size()-1]+1;
        }
        
    }
    
	return 0;
}
