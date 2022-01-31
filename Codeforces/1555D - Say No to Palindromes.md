### []()

``` cpp
Problem Statement: string is beautiful if it does not contain a substring of length at least 2, which is a palindrome.string will contain only a,b,c as characters. we have to make the string beautiful by perfoming operation in which you can change  
char to any char b/w a,b,c. you have to minimize the no of operation in making string beautifull.
```

## Approach1
``` cpp
if string contains only three type of character then the beautifull strings that can be formed are
    abcabcabc..., acbacbabc.., bacbac..., bcabca.., cabcab.., cbacba..

```

``` cpp
vector<string> v={"abc","acb","bac","bca","cab","cba"};
void solve(){
   int n,m;
   cin>>n>>m;
   string s;
   cin>>s;
   vector<vector<int>>vec(6,vector<int>(n+1,0));
   for(int j=0;j<6;j++){
   
      for(int i=0;i<n;i++){
         vec[j][i+1]=vec[j][i]+(v[j][i%3]!=s[i]);
      }
   }
   while(m--){
      int l,r;
      cin>>l>>r;
     
      int res=INT_MAX;
      for(int i=0;i<6;i++)
      {
         int diff=vec[i][r]-vec[i][l-1];
         res=min(res,diff);
      }
      cout<<res<<endl;
   }
	
}

```

## Approach2

``` cpp
void solve(){
   int n,m;
   cin>>n>>m;
   string s;
   cin>>s;
   vector<vector<int>>vec(6,vector<int>(n+1,0));
   string t = "abc";
   int cur = 0;
   do {
      for (int i = 0; i < n; ++i)
         vec[cur][i + 1] = vec[cur][i] + (s[i] != t[i % 3]);
      ++cur;
   } while (next_permutation(t.begin(), t.end()));
   while(m--){
      int l,r;
      cin>>l>>r;
     
      int res=INT_MAX;
      for(int i=0;i<6;i++)
      {
         int diff=vec[i][r]-vec[i][l-1];
         res=min(res,diff);
      }
      cout<<res<<endl;
   }
	
}
```
