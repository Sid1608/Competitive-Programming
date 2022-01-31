//Author:Siddharth Akar	

``` cpp
ll seg[400004];
ll a[100001];

void buildTree(ll si,ll ss,ll se)
{
    if(ss==se){
        seg[si]=a[ss];
        return;
    }
    ll mid=(ss+se)/2;
    buildTree(2*si,ss,mid);
    buildTree(2*si+1,mid+1,se);
    seg[si]=min(seg[2*si],seg[2*si+1]);
}
ll query(ll si,ll ss,ll se,ll qs,ll qe)
{
    if(qs>se||qe<ss)
        return INT_MAX;
    if(qs<=ss&&qe>=se)  
        return seg[si];
    ll mid=(ss+se)/2;
    ll l=query(2*si,ss,mid,qs,qe);
    ll r=query(2*si+1,mid+1,se,qs,qe);
    return min(l,r);
}
void solve(){
	ll n,q,l,r;
	cin>>n;
	repk(i,1,n+1)
		cin>>a[i];
	buildTree(1,1,n);
	cin>>q;
	while(q--){
		cin>>l>>r;
		cout<<query(1,1,n,l+1,r+1)<<endl;
	}
	
}
```