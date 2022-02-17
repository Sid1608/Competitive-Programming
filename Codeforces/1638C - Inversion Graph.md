
[C. Inversion Graph](https://codeforces.com/contest/1638/problem/C)

``` cpp
You are given a permutation p1,p2,…,pn. Then, an undirected graph is constructed in the following way: add an edge between vertices i, j such that i<j if and only if pi>pj. Your task is to count the number of connected components in this graph.
```


### Approach 1 
``` cpp
void solve(){
	int n;
	cin>>n;
	vector<int>v(n),par(n+1,-1);
	rep(i,n)cin>>v[i];
	set<int,greater<int>>s;
	rep(i,n){
	    int x=0;
	    for(auto j:s){
	        if(j>v[i]){
	            if(x==0){
	                par[v[i]]=j;
	            }else{
	                par[j]=par[v[i]];
	            }
	            x++;
	            
	        }else{
	            break;
	        }
	    }
	    if(par[v[i]]==-1)
	        s.insert(v[i]);
	}
	int res=0;
	for(int i=1;i<=n;i++){
	    if(par[i]==-1)
	        res++;
	}
	cout<<res<<endl;
	
	
}
```
