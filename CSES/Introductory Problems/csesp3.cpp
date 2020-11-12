#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll c=0,l=0;
    string s;
    cin>>s;
    for(ll i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
            c++;
        else
        {
            if(c>l)
                l=c;
            c=0;
        }
    }
    if(c>l)
        l=c;
    cout<<l+1;
    return 0;
}
