#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
bool isPrime(ll n) 
{
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
      for (ll i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 
int main(){
    ll  n;
    cin>>n;
    ll x[n];
    for(ll i=0;i<n;i++)
        cin>>x[i];
    for(ll i=0;i<n;i++){
        if(x[i]!=1){
            ll y=sqrt(x[i]);
            if(y*y==x[i])
            {
                if(isPrime(y))
                    cout<<"YES"<<"\n";
                else
                    cout<<"NO"<<"\n";    
            }
            else
                cout<<"NO"<<"\n";
        }
        else
            cout<<"NO"<<"\n";
            
    }
    return 0;
}