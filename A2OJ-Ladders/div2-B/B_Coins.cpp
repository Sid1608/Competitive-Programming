#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,g=0;
    cin>>n;
    vector<ll>v;
   // v.push_back(n);
    while(n!=1){
        v.push_back(n);
        for(int i=n/2;i>=1;i--){
            if(n%i==0){
                n=i;
                break;
            }

        }
    }
    v.push_back(1);
    for(ll i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}