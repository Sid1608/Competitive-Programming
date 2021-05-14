//author:Siddharth Akar
#include<bits/stdc++.h>
#define ull 		    unsigned long long int 
#define ll 			    long long  
#define li 			    long int 
#define endl 		    "\n"
#define rep(i,n)  	    for(int i=0;i<n;i++)
#define repk(i,k,n)     for(int i=k;i<n;i++)
#define repd(i,n) 	    for(int i=n-1;i>=0;i--)
#define mod             1000000007
#define all(v) 		    v.begin(), v.end()
#define pb 			    push_back 
#define fast 	        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main() {
    fast;
    ll n;
    cin>>n;
    vector<ll>a(n),nearest_jump(n);
    multiset<pair<ll,ll>>mt;
    stack<int>s;
    rep(i,n)
        cin>>a[i];
    rep(i,n){
        while(!s.empty()){
            auto pos=s.top();
            if(a[pos]<a[i])break;
            s.pop();
        }
        if(!s.empty()){
            nearest_jump[i]=s.top();
        }
        else{
            nearest_jump[i]=-1;
        }
        s.push(i);
    }
    rep(i,n)
        cout<<nearest_jump[i]+1<<" ";
    // rep(i,n){
    //     mt.insert({a[i],i});
    //     auto it=mt.lower_bound({a[i],i});
    //     if(it==mt.begin()){
    //         cout<<0<<"";
    //     }
    //     else{
    //         it--;
    //         pair<ll,ll>p;
    //         cout<<p.second+1<<" ";
    //     }                                                                                  
    // }
	return 0;
}
