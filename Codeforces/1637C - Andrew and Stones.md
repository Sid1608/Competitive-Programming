``` cpp
  problem Statement: Andrew can perform the following operation any number of times: choose 3 indices 1≤i<j<k≤n, such that the j-th pile contains at least 2 stones, then he takes 2 stones from the pile j and puts one stone into pile i and one stone into pile k.

Tell Andrew what is the minimum number of operations needed to move all the stones to piles 1 and n, or determine if it's impossible.
```


### Approach 1 
``` cpp
void solve(){
	int n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	if(n==3 and a[1]&1){
	    cout<<-1<<endl;
	    return ;
	}
	int k=1;
	while(k<n-1 and a[k]==1)
	    k++;
	if(k==n-1){
	    cout<<-1<<endl;
	    return;
	}
	ll res=0;
    for(int i=1;i<n-1;i++){
        res+=(a[i]+1)/2;
    }
	cout<<res<<endl;
	
 
	
}
```
