[1674D - A-B-C Sort](https://codeforces.com/contest/1674/problem/D)
```cpp
void solve(){
 
   int n;
   cin>>n;
   int a[n],b[n];
   rep(i,n)cin>>a[i],b[i]=a[i];
   vector<int>c;
   int m=n;
   if(n==1){
      cout<<"YES\n";
      return ;
   }
   sort(b,b+n);
   int l=0,r=1;
   while(m--){
      if(m%2!=0){
         if(a[l]<=a[r]){
            c.push_back(a[l]);
            l=r;
            r++;
         }else{
            c.push_back(a[r]);
            r++;
         }
      }else{
         c.push_back(a[l]);
         l=r;
         r++;
      }
   }
  
   for(int i=0;i<n;i++){
      if(c[i]!=b[i]){
         cout<<"NO\n";
         return ;
      }
   }
   cout<<"YES\n";

}
```
