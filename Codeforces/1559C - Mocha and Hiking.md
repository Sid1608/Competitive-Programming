### [C. Mocha and Hiking](https://codeforces.com/contest/1559/problem/C)

``` cpp
Problem Statement:

```

## Approach1

``` cpp
void solve(){
   int n;
   cin>>n;
   int a[n+2];
   rep(i,1,n){
      cin>>a[i];
   }
   if(a[1]){
      cout<<n+1<<" ";
      for(int i=1;i<=n;i++){
         cout<<i<<" ";
      }
      cout<<endl;
      return ;
   }
 
   for(int i=1;i<n;i++){
         
         if(!a[i] and a[i+1]){
            for(int j=1;j<=i;j++)
               cout<<j<<" ";
            cout<<n+1<<" ";
            for(int j=i+1;j<=n;j++)
               cout<<j<<" ";
            cout<<endl;
            return;
         }
   }
   for(int i=1;i<=n+1;i++){
         cout<<i<<" ";
   }
   cout<<endl;
	
}

```

## Approach2

``` cpp

```
## Approach3

``` cpp

`