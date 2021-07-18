
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,no=0;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<ll>mg,ir,cs,b;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='M')
            {
                mg.push_back(i);
                b.push_back(0);
                cs.push_back(0);
            }
            else if(s[i]=='I')
            {
                ir.push_back(i);
                b.push_back(0);
                cs.push_back(0);
            }
            else if(s[i]=='X')
                b.push_back(1);
            else if(s[i]==':')
                cs.push_back(1);    
        }
        for(ll i=1;i<n;i++)
        {
            b[i]+=b[i-1];
            cs[i]+=cs[i-1];
        }
        ll x=mg.size(),y=ir.size();
        int i=0,j=0;
        while(i<x&&j<y)
        {
            if(abs(b[mg[i]]-b[ir[j]])==0)
            {
                ll p=k+1-abs(mg[i]-ir[j])-abs(cs[mg[i]]-cs[ir[j]]);
                if(p>0)
                {
                    i++;
                    j++;
                    no++;
                }
                else
                {
                    if(mg[i]>ir[j])
                        j++;
                    else
                        i++;    
                }
                
            }
            else
            {
                i++;
            }
            
        }
       
        cout<<no<<"\n";
        
    }

    return 0;
}
