//author:Siddharth Akar
//logic:if sum is not divisible 3 by then we will not be able to divide array into three equal parts.
//now as sum is divisible by 3 we will start adding array elements from last index,as s equals sum/3 we now have to divide remaining array into two parts.
//for dividing array into two parts: we will first make prefix array.then we will count no of occurences of sum/3 and add it to the ans.
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#define ull 		    unsigned long long int 
#define ll 			    long long 
#define li 			    long int 
#define endl 		    "\n"
#define rep(i,n)  	    for(int i=0;i<n;i++)
#define repk(i,k,n)     for(int i=k;i<n;i++)
#define repd(i,n) 	    for(int i=n-1;i>=0;i--)
#define mod             1000000007
#define gcd(a,b) 	    __gcd(a,b)
#define lcm(a,b) 	    (a*b)/gcd(a,b)
#define F 			    first 	
#define S 			    second 
#define all(v) 		    v.begin(), v.end() 
#define pb 			    push_back 
#define pii 		    pair<int,int>
#define pll 		    pair<ll,ll>
#define fast 	        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define pbds            tree < int ,  null_type ,  less ,  rb_tree_tag ,  tree_order_statistics_node_update >
using namespace __gnu_pbds;
using namespace std;

int main() {
    fast;
    ll n;
    cin>>n;
    ll a[n],sum=0,pref[n];
    rep(i,n)
        cin>>a[i],sum+=a[i],pref[i]=a[i];
    if(sum%3!=0){
        cout<<0;
    }
    else{
        repk(i,1,n){
            pref[i]+=pref[i-1];
        }
        ll freq[n]={0};
        rep(i,n){
            if(pref[i]==sum/3){
                freq[i]=1;
            }
        }
        repk(i,1,n){
            freq[i]+=freq[i-1];
        }
        ll ans=0,f=1,s=0;
        for(ll i=n-1;i>=2;i--){
            s+=a[i];
            if(s==sum/3){
                ans+=freq[i-2];
            }
        }
        cout<<ans;
    }
    
	return 0;
}
