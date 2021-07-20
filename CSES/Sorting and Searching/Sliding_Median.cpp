//Author:Siddharth Akar
//problem_link:https://cses.fi/problemset/task/1076
//given an array calculate the median of each window of k elements, from left to right.


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

vector<int> solve(vector<int>& nums, int k){
        int n=nums.size();
        set<pair<int,int>>ls,rs;//ls=>left set rs=>right set
        vector<int>ans;
        int l,r;//l->left set size and r->right set size
        if(k%2==0)
            l=k/2,r=k/2;
        else
            l=(k/2)+1,r=k-l;
        for(int i=0;i<k;i++)
            ls.insert({nums[i],i});
        while(ls.size()!=l){
            rs.insert(*ls.rbegin());
            ls.erase(ls.lower_bound(*ls.rbegin()));
        }
        ans.push_back((*ls.rbegin()).first);
        int left=0;
        for(int right=k;right<n;right++){
            if(ls.find({nums[left],left})!=ls.end()){
                ls.erase({nums[left],left});
                left++;
            }
            else{
                rs.erase({nums[left],left});
                left++;
            }
            if(ls.size()!=0 and nums[right]<=(*ls.rbegin()).first){
                ls.insert({nums[right],right});
            }
            else{
                rs.insert({nums[right],right});
            }
            
            if(ls.size()>=l){
               while(ls.size()!=l){
                    rs.insert(*ls.rbegin());
                    ls.erase(ls.lower_bound(*ls.rbegin()));
                }
            }
            else{
                while(ls.size()!=l){
                    ls.insert(*rs.begin());
                    rs.erase(rs.lower_bound(*rs.begin()));
                }
            }
            ans.push_back((*ls.rbegin()).first);
        }
        return ans;
}

int main()
{
	fast;
	ll t;
	//cin >> t;
	t=1;
	while (t--)
	{
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        rep(i,n)cin>>a[i];
        vector<int>res=solve(a,k);
        rep(i,res.size()){
            cout<<res[i]<<" ";
        }
	}
	return 0;
}