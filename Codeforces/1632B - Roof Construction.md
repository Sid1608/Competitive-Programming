``` cpp
  problem Statement: Find any sequence of pillar heights p of length n with the smallest construction cost.
  In this problem, a permutation is an array consisting of n distinct integers from 0 to n−1 in arbitrary order.
  cost of construction is equal to max1≤i≤n−1pi⊕pi+1
```


### Approach 1 ()
``` cpp
void solve(){
   int n;
   cin>>n;
   int x=log2(n);
   int m=pow(2,x);
   if((n&(n-1))==0)
        m=m/2;
   for(int i=m-1;i>=0;i--){
       cout<<i<<" ";
   }
   for(int i=m;i<n;i++){
       cout<<i<<" ";
   }
   cout<<endl;	
}
```
### Approach 2(DP)
``` cpp
void solve(){
	int n;
   cin>>n;
   if(n==2){
       cout<<0<<" "<<1<<endl;
       return;
   }else if(n==3){
       cout<<1<<" "<<0<<" "<<2<<endl;
       return;
   }else if(n==4){
       cout<<1<<" "<<0<<" "<<2<<" "<<3<<endl;
       return;
   }else if(n==5){
       cout<<3<<" "<<2<<" "<<1<<" "<<0<<" "<<4<<endl;
       return;
   }
   vector<int>a;
   int x=log2(n);
   int m=pow(2,x);
 
   if((n&(n-1))==0){
       m=m/2;
   }
   if(m==4){
       cout<<3<<" "<<2<<" "<<1<<" "<<0<<" "<<4<<" ";
       for(int i=5;i<n;i++){
           cout<<i<<" ";
       }
       cout<<endl;
       return;
   }
   int f=0;
   for(int i=1;i<n;){
      if(i != 0 && (i & (i+1)) == 0 && i+1!=2 && (i+1)<n){
          if(i+1==m/2){
               f=1;
          }
         if(i+1!=m){
            if(i+1==4){
                a.pb(1);
                a.pb(4);
            }else{
            a.pb(((i+1)/2)+1);
            a.pb(i+1);
            }
            i+=2;
         }else{
             a.pb(i);
            //  swap(a[a.size()-1],a[a.size()-2]);
            a.pb(0);
            if(i+1<n){
                a.pb(i+1);
            
            }else
                swap(a[a.size()-1],a[a.size()-2]);
            
             i+=2;
         }
      }else{
         if(f==1){
            a.pb(i);
         }else{
            a.pb(i+1);
         }
         i++;
      }
   }
   
   
   for(int i=0;i<a.size();i++){
       if(i==a.size()-1){
         cout<<a[i]<<endl;
      }else
         cout<<a[i]<<" ";
   }
 
 
 
	
}
```
### Approach 3
``` cpp
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int k = 0;
        while((1 << (k + 1)) <= n - 1) ++k; 
        for(int i = (1 << k) - 1; i >= 0; i--) {
            cout << i << ' ';
        }
        for(int i = (1 << k); i < n; i++) {
            cout << i << ' ';
        }
        cout << '\n';
    }
}
```