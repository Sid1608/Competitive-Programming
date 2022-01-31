### [D1. Mocha and Diana (Easy Version)](https://codeforces.com/contest/1559/problem/D1)

``` cpp
Problem Statement:

```

## Approach1

``` cpp
int Find(int node,vector<int>&parent){
   if(node==parent[node])
      return node;
   return parent[node]=Find(parent[node],parent);
}
void Union(int u,int v,vector<int>&parent,vector<int>&rank){
   int a=Find(u,parent);
   int b=Find(v,parent);
   if(rank[a]>rank[b])
      parent[b]=a;
   else if(rank[a]<rank[b])
      parent[a]=b;
   else{
      parent[a]=b;
      rank[a]++;
   }
   
}
void solve(){
   int n,m1,m2,u,v;
   cin>>n>>m1>>m2;
   vector<int>p1(n+1,0),p2(n+1,0);
   rep(i,n+1)p1[i]=i;
   rep(i,n+1)p2[i]=i;
   vector<int>r1(n+1,0),r2(n+1,0);
   while(m1--){
      cin>>u>>v;
      Union(u,v,p1,r1);
   }
   while(m2--){
      cin>>u>>v;
      Union(u,v,p2,r2);
   }
   vector<pair<int,int>>vec;
   for(int i=1;i<=n;i++){
      for(int j=i+1;j<=n;j++){
         if((Find(i,p1)!=Find(j,p1)) and (Find(i,p2)!=Find(j,p2))){
            vec.pb({i,j});
            Union(i,j,p1,r1);
            Union(i,j,p2,r2);
 
         }
      }
   }
   cout<<vec.size()<<endl;
   for(int i=0;i<vec.size();i++){
      cout<<vec[i].F<<" "<<vec[i].S<<endl;
   }
 
	
}

```

## Approach2

``` cpp

```
## Approach3

``` cpp

`