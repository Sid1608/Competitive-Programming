/*Author:Siddharth Akar*/
// problem link:https://www.codechef.com/CQM2021/problems/CQM82B
// logic:start from index 0 search for the element greater than it in even positions if even or odd if odd.if found
// the swap the two positions and break from the loop and return the string, if not found then go to next index and 
// do the similar things.


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

int main() {
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n=s.size();
        int a[n];
        rep(i,n){//created an array which contains digits of our string.
            int c=s[i]-'0';
            a[i]=c;
        }
        cout<<endl;
        multiset<pll>ev,od;//ev will contains all even position digits and od will contain all odd positions digits
        rep(i,n){
            if(i%2==0)
                ev.insert({a[i],i});
            else
                od.insert({a[i],i});
        }
        ll st=-1,en=-1,got=0;
        pll x;
        rep(i,n)
        {
            if(i%2==0){
                x=*ev.rbegin();//taking largest element from ev.
                if(i<x.S&&x.F>a[i]){  
                    st=i;
                    en=x.S;
                    got=1;
                    break;
                }
                else{
                    ev.erase(ev.lower_bound({a[i],i}));
                }
            }
            else{
                x=*od.rbegin();
                if(i<x.S&&x.F>a[i]){
                    st=i;
                    en=x.S;
                    got=1;
                    break;
                }
                else{
                    od.erase(od.lower_bound({a[i],i}));
                }
            }
        }
        if(got==1){
            swap(s[st],s[en]);
            cout<<s<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }


	return 0;
}

