### [Equal Difference](https://www.codechef.com/COOK132B/problems/EQDIFFER)

``` cpp
Problem Statement: Find the minimum number of integers you need to delete from the array such that the absolute difference between each pair of integers in the remaining array will become equal.

```

### Approach

``` cpp
absolute differece between each pair will be equal if and only if all the elements in the array are equal. so we have to keep the integer that is occuring maximum amount of time and delete the rest of integers. also for n=1 and n=2 our ans would be 0, and for n>2 our ans would be min(n-2,n-maxi), where maxi is the frequency of integer which is occuring maximum no of time.
```
#### code
``` cpp
void solve(){
    ll n;
    cin>>n;
    ll a[n];

    rep(i,0,n-1)
        cin>>a[i];
    if(n==1||n==2){
        cout<<0<<endl;
        return;
    }
    unordered_map<ll,ll>p;
    for(int i=0;i<n;i++)p[a[i]]++;
    ll maxi=INT_MIN;
    for(auto i:p){
        maxi=max(maxi,i.S);
    }
    cout<<min(n-2,n-maxi)<<endl;
	
}

```

### Approach2

``` cpp

```