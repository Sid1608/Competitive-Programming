//author:Siddharth Akar
#include <iostream>
using namespace std;
typedef long  int ll;
int main() {
    ll  n,sum=0,s;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n-1;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    s=((n*n)+n)/2;
    cout<<s-sum;
	return 0;
}

