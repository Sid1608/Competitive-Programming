### [Clear the Array](https://www.codechef.com/COOK132B/problems/CLEARARR)

``` cpp
Problem Statement:

```

## Approach1

``` cpp
void solve(){
	int n,k,x;
    cin>>n>>k>>x;
    vector<ll>a(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(all(a),greater<ll>());
    for(int i=0;i<n-1;i+=2){
        if(k>0){
            if(a[i]+a[i+1]>x){
                sum-=(a[i]+a[i+1]);
                sum+=x;
                k--;
            }
        }

    }
    cout<<sum<<endl;
}

```

## Approach2 (Priority-Queue)

``` cpp
void solve(int tc) {
    int n, k;
    ll x;
    cin >> n >> k >> x;
    priority_queue<ll> pq;
    for (int i = 0; i < n; ++i) {
        ll a;
        cin >> a;
        pq.push(a);
    }
    ll ans = 0;
    while (k-- and sz(pq) > 1) {
        ll a = pq.top();
        pq.pop();
        ll b = pq.top();
        pq.pop();
        if (a + b < x) {
            pq.push(a);
            pq.push(b);
            break;
        }
        ans += x;
    }
    while (!pq.empty()) {
        ans += pq.top();
        pq.pop();
    }
    cout << ans << '\n';
}
```