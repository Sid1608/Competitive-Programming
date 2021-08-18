### [C. Alternating Subsequence](https://codeforces.com/contest/1343/problem/C)

``` cpp
Problem Statement:
given a sequence a consisting of n positive and negative elements (there is no zeros in the sequence).
Your task is to choose maximum by size (length) alternating subsequence of the given sequence
Among all such subsequences, you have to choose one which has the maximum sum of elements.
In other words, if the maximum length of alternating subsequence is k then your task is to
find the maximum sum of elements of some alternating subsequence of length k.
example
10
-2 8 3 8 -4 -15 5 -2 -3 1
output:6
```


## Approach

``` cpp

void solve(){
	ll n;
	cin>>n;
	ll a[n];
	rep(i,0,n-1)cin>>a[i];
	int t=0;
	ll res=0,maxi=a[0];
	for(int i=1;i<n;i++){
		if(a[i]*maxi>0){
			maxi=max(maxi,a[i]);
		}
		else{
			res+=maxi;
			maxi=a[i];
		}
	}
	res+=maxi;
	cout<<res<<endl;
	
}

```

## Approach

``` cpp

```
