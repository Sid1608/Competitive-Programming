#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int k,sum=0,a,x=1;
    int w[26];
    cin>>s>>k;
    for(int i=1;i<=26;i++)
        cin>>w[i];
    for(int i=0;i<s.size();i++ )
    {
        sum=sum+x*w[s[i]%96];
        x++;
    }
    a=*max_element(w+1,w+26);
    while(k--)
    {
        sum=sum+(x*a);
        x++;
    }
    cout<<sum;
   
        
	return 0;
}