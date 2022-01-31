


### []()
Author:@Siddharth Akar<br>
Problem Statement:


## Approach1

``` cpp
//Author:Siddharth Akar	
ll seg[400004];
ll a[100001];
void buildTree(ll ind,ll ss,ll se)
{
    if(ss==se){
        seg[ind]=a[ss]%2;
        return;
    }
    ll mid=(ss+se)/2;
    buildTree(2*si,ss,mid);
    buildTree(2*si+1,mid+1,se);
    seg[si]=seg[2*si]+seg[2*si+1];
}
ll query(ll si,ll ss,ll se,ll qs,ll qe)
{
    if(qs>se||qe<ss)
        return 0;
    if(qs<=ss&&qe>=se)  
        return seg[si];
    ll mid=(ss+se)/2;
    ll l=query(2*si,ss,mid,qs,qe);
    ll r=query(2*si+1,mid+1,se,qs,qe);
    return l+r;
}
void update(ll si,ll ss,ll se,ll node,ll val)
{
    if(se==ss)
    {
        seg[si]=a[node]%2;
        return;
    }
    ll mid=(ss+se)/2;
    if(node<=mid)
        update(2*si,ss,mid,node,val);
    else
        update(2*si+1,mid+1,se,node,val);
    seg[si]=seg[2*si]+seg[2*si+1];
}
int main() {
    fast;
    ll n,q;
    cin>>n;
    for(ll i=1;i<=n;i++)
        cin>>a[i]; 
    buildTree(1,1,n);        
    cin>>q;
    while(q--){
        ll type,x,y;
        cin>>type;
        if(type==0){
            cin>>x>>y;
             a[x]=y;
            update(1,1,n,x,y);
        }
        else if(type==1){
            cin>>x>>y;
           
            cout<<(y-x+1)-query(1,1,n,x,y)<<"\n";
        }
        else{
            cin>>x>>y;
            cout<<query(1,1,n,x,y)<<"\n";
        }
    }

    
	return 0;
}

```

## Approach2

``` cpp

```
## Approach3

``` cpp

```
## Approach4

``` cpp

```
## Approach5

``` cpp

