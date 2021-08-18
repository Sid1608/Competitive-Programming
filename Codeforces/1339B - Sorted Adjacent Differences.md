### [B. Sorted Adjacent Differences]()

``` cpp
Problem Statement:
You have array of n numbers a1,a2,…,an.
Rearrange these numbers to satisfy |a1−a2|≤|a2−a3|≤…≤|an−1−an|
all numbers in a are not necessarily different.
example input:
6
5 -2 4 8 6 5
output
5 5 4 6 8 -2
```

## Approach
``` cpp
sort the array 
if n is odd our middle element will be the first element.now take two indexes i and j.
i is pointing the left to middle j is pointing right to middle.
keep on picking array element pointed by i and j until j reaches end of array(or i reaches start of array).

if n is even we have to middle elements point i to left and j to right and repeat the above process

```

``` cpp
void solve(){
   ll n;
   cin>>n;
   ll a[n];
   rep(i,0,n-1)cin>>a[i];
   sort(a,a+n);
   vector<ll>ans;
   if(n&1){
      ans.pb(a[n/2]);
      int i=(n/2)-1;
      int j=(n/2)+1;
      while(i>=0){
         ans.pb(a[i]);
         ans.pb(a[j]);
         i--,j++;
      }
   }
   else{
      int i=(n/2)-1;
      int j=(n/2);
      while(i>=0){
         ans.pb(a[i]);
         ans.pb(a[j]);
         i--,j++;
      }
 
   }
   for(int i=0;i<n;i++){
      cout<<ans[i]<<" ";
   }
   cout<<endl;
	
}

```

