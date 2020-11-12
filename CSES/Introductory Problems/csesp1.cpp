#include <iostream>
using namespace std;
typedef long long int ll;
int main() {
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1)
    {
        if(n%2==0)
        {
            cout<<n/2<<" ";
            n=n/2;
        }
        else
        {
            cout<<(n*3)+1<<" ";
            n=(3*n)+1;
        }
    }
   // cout<<1;
	return 0;
}
