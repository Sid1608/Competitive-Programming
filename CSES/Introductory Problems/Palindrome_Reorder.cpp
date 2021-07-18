//Author:Siddharth Akar

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ull unsigned long long int
#define ll long long
#define li long int
#define endl "\n"
#define rep(i, n) for (int i = 0; i < n; i++)
#define repk(i, k, n) for (int i = k; i < n; i++)
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define F first
#define S second
#define all(v) v.begin(), v.end()
#define pb push_back
#define vi vector<int>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<pii>
#define fast ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define pbds tree<int, null_type, less, rb_tree_tag, tree_order_statistics_node_update>
using namespace __gnu_pbds;
using namespace std;

bool Isprime (ll a) { if(a<=1) return false; if(a==2||a==3) return true; if(a%2==0||a%3==0) return false; for(ll i=5;i*i<=a;i=i+6) { if(a%i==0||a%(i+2)==0) return false; } return true;}

int main() {
    fast;
    string s;
    cin>>s;
    map<char,ll>p;
    rep(i,s.size())
        p[s[i]]++;
    if(s.size()%2==0){
        int g=0;
        for(auto x: p){
            if(x.S%2!=0){
                g=1;
                break;
            }
        }
        if(g==1)
            cout<<"NO SOLUTION";
        else{
            string x,y;
            for(auto j: p){
                rep(i,j.S/2)
                    x+=j.F;
                rep(i,j.S/2)
                    y+=j.F;
            }
            REVERSE(y);
            x+=y;
            cout<<x;
        }
    }
    else{
        int g=0;
        char k;
        for(auto x: p){
            if(x.S%2!=0){
                k=x.F;
                p[x.F]--;
                g++;
                if(g>1)
                    break;
            }
        }
        if(g>1)
            cout<<"NO SOLUTION";
        else{
            string x,y;
            for(auto j: p){
                rep(i,j.S/2)
                    x+=j.F;
                rep(i,j.S/2)
                    y+=j.F;
            }
            REVERSE(y);
            x+=k;
            x+=y;
            cout<<x;
        }

    }


	return 0;
}
