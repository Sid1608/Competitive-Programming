
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
int main() 
{
    //fast;
    int t;
	cin>>t;
   // cout<<t;
	while(t--)
	{
		int  n;
		cin>>n;
        string s;
        cin>>s;
        int a=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                if(a==3)
                    a=0;
                else
                    a++;
            }
            else{
                if(a==0)
                    a=3;
                else    
                    a--;
            }
        }
        if(a==0)
            cout<<'E'<<"\n";
        else if(a==3)
            cout<<'N'<<"\n";
        else if(a==2)
            cout<<'W'<<"\n";
        else if(a==1)
            cout<<'S'<<"\n";
	}
	return 0;
}