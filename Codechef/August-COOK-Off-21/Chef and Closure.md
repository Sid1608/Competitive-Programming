### [Chef and Closure ](https://www.codechef.com/COOK132B/problems/CLOSCHEF)

``` cpp
Problem Statement:

```

## Approach1

``` cpp
void solve(){
	ll n;
    cin>>n;
    ll a[n],p=1;
    set<ll>s;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]==0){
            continue;
        }
        p*=a[i];
        if(s.find(p)==s.end()){
            cout<<0<<endl;
            return;
        }
    }
    p=1;
    for(int i=n-1;i>=0;i--){
        if(a[i]==0){
            continue;
        }
        p*=a[i];
        if(s.find(p)==s.end()){
            cout<<0<<endl;
            return;
        }
    }
    cout<<1<<endl;
}

```

## Approach2

``` cpp

```