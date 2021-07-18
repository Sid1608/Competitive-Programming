#include<bits/stdc++.h>
using namespace std;
#define  ll long long 
bool isValid(unordered_map<char,int>p)
{
    if(p['1']!=0&&p['2']!=0&&p['3']!=0)
        return true;
    else 
        return false;
}
bool is_valid(ll n,string s)
{
    unordered_map<char,int>p;
    ll l=0,res=INT_MAX,f=0;
    for(int r=0;r<s.size();r++){
        p[s[r]]++;
        if(r-l+1==n){
            if(isValid(p)){
                f=1;
                break;
            }
            p[s[l]]--;
            l++;
        }
    }
    if(f)
        return true;
    else
        return false;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n=s.size();
        ll l=3,h=n,res=1000000007;
        while(l<=h)
        {
            ll mid=(l+h)/2;
            if(is_valid(mid,s))
            {
               h=mid-1;
               res=min(res,mid);
            }
            else{
                l=mid+1;
            }

        }
        if(res==1000000007)
            cout<<"0\n";
        else
            cout<<res<<"\n";
    }
    return 0;
}