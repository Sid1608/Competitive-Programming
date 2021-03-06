#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool cmp(const pair<int,int> &a,const pair<int,int> &b){ 
    if(a.first!=b.first)
        return a.first<b.first;
    else    
        return a.second>=b.second; 
} 
int main()
{
    ll n,l;
    cin>>n>>l;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);    
    ll m=-1;
    for(int i=1;i<n;i++){
        ll x=a[i]-a[i-1];
        m=max(m,x);
    }  
    float ma=(float)m/2;
    if(a[0]!=0){
        ma=max((float)a[0],ma);
    }
    if(a[n-1]!=l){
        ma=max((float)(l-a[n-1]),ma);
    }
    cout<<fixed<<setprecision(10)<<ma;
    
    return 0;
}