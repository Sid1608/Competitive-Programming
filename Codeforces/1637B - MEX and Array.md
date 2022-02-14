``` cpp
  problem Statement: You are given an array a of size n. Find the sum of values of all its subsegments.
  Let's define the cost of a partition as c+∑i=1cmex({bli,bli+1,…,bri}),
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
	int res=0;
	for(int i=0;i<n;i++){
	    for(int j=i;j<n;j++){
	        res+=(j-i+1);
	        for(int k=i;k<=j;k++){
	            if(a[k]==0)
	                res++;
	        }
	    }
	}
	cout<<res<<endl;
	
 
	
}
```
### Approach 2
``` cpp

```
