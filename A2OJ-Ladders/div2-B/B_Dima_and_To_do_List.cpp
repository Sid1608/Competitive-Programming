#include<bits/stdc++.h>
#define ull unsigned long long int 
#define ll long long int  
#define li long int 
#define endl "\n"
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
// int cpl(int a[],n,k){
//     //base condition
//     //choice diagram
//     cpl(int a[],n-1,k)
// }
int main() {
    fast;
    li t;
    cin>>t;
    TC(t)
    {
       int n,k;
       cin>>n>>k;
       ll h[n];
       for(int i=0;i<n;i++){
           cin>>h[i];
       }
       //sort(h,h+n);
       ll dp[n+1];
       dp[0]=1;
       for(int i=1;i<=k;i++){
           dp[i]=0;
       }
       for(int i=0;i<n;i++){
           int cur_element=h[i];
           for(int j=k;j>0;j--){
               dp[j]=dp[j-cur_element];
           }
       }
       for(int i=0;i<=k;i++)
            cout<<dp[i]<<" ";
        cout<<"\n";
    }
	return 0;
}
#include<bits/stdc++.h>
#define ull unsigned long long int 
#define ll long long int  
#define li long int 
#define endl "\n"
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
// int cpl(int a[],n,k){
//     //base condition
//     //choice diagram
//     cpl(int a[],n-1,k)
// }
int main() {
    fast;
    li t;
    cin>>t;
    TC(t)
    {
       int n,k;
       cin>>n>>k;
       ll h[n];
       ll s=0;
       for(int i=0;i<n;i++){
           cin>>h[i];
           s+=h[i];
       }
       if(s<2*k)
            cout<<-1<<"\n";
       else
       {
           //sort(h,h+n);
           ll dp[n+1][k+1];
           dp[0][0]=1;
           for(int i=1;i<=k;i++){
               dp[0][i]=0;
           }
           for(int i=1;i<=n;i++){
               for(int j=0;j<=k;j++){
                   if(j<h[i-1])
                        dp[i][j]=dp[i-1][j];
                   else{
                       if(dp[i-1][j]==1||dp[i-1][j-h[i-1]]==1)
                            dp[i][j]=1;
                       else
                            dp[i][j]=0;
                   }
               }
           }
           for(int i=0;i<=n;i++){
               for(int j=0;j<=k;j++){
                   cout<<dp[i][j]<<" ";
               }
               cout<<"\n";
           }
       }
    }
	return 0;
}
