### [C. Coin Rows](https://codeforces.com/contest/1555/problem/C)

``` cpp
Problem Statement:Alice and Bob are playing a game on a matrix, consisting of 2 rows and m columns.
initially, both Alice and Bob are standing in a cell (1,1). 
They are going to perform a sequence of moves to reach a cell (2,m).
They can only move in right and down direction.When Alice finishes, Bob starts his journey. 
He also performs the moves to reach (2,m) and collects the coins in all cells that he visited, but Alice didn't.
The score of the game is the total number of coins Bob collects.

Alice wants to minimize the score. Bob wants to maximize the score. 
What will the score of the game be if both players play optimally?
```

### Approach

``` cpp
void solve()
{
	 int m;
   cin>>m;
   int a[2][m],b[2][m];
   for(int i=0;i<2;i++){
      for(int j=0;j<m;j++){
         cin>>a[i][j];
         b[i][j]=a[i][j];
      }
   }
   for(int i=0;i<2;i++){
      for(int j=1;j<m;j++){
         b[i][j]+=b[i][j-1];
      }
   }
   int res=INT_MAX;
   for(int i=0;i<m;i++){
      if(i==0){
         res=min(res,b[0][m-1]-b[0][i]);
      }
      else if(i==m-1){
         res=min(res,b[1][i-1]);
      }
      else{
         res=min(res,max(b[0][m-1]-b[0][i],b[1][i-1]));
      }
   }
   cout<<res<<endl;
 
	
}

```





























