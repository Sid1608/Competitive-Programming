#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
#include<cmath>
#include<string>
#include<iostream>
#include<map>
#include<set>
using namespace std;
#define ll long long
int a[1005],n;
int dp[1005];
int dfs(int x)
{
    if(x<0)
        return 0;
    if(dp[x]!=-1)
        return dp[x];
    dp[x]=min(a[x],max(dfs(x-1),dfs(x-2)));
    return dp[x];
}
int main()
{
    int i,j,k;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
        memset(dp,-1,sizeof(dp));
            dp[0]=0;
            dp[1]=a[1];
       printf("%d\n",dfs(n));

    }
    return 0;
}
