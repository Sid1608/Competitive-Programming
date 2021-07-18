 #include <bits/stdc++.h>
using namespace std;
const unsigned int M=1000003;
typedef long long int ll;
#define int int64_t
int power(int x, int y){  
    int res = 1;
    x = x % M; 
    if (x == 0) return 0;
    while (y > 0)  { 
        if (y & 1)  
            res = (res*x) % M;  
        y = y>>1; 
        x = (x*x) % M;  
    }  
    return res;  
}  
  
int main()
{
    map<char,string>p;
    p['>']="1000";
    p['<']="1001";
    p['+']="1010";
    p['-']="1011";
    p['.']="1100";
    p[',']="1101";
    p['[']="1110";
    p[']']="1111";
    string s;
    cin>>s;
    string t;
    for(int i=0;i<s.size();i++ )
        t+=p[s[i]];
    int ans=0;
    for(int i=t.size()-1;i>=0;i--)
    {
        if(t[i]=='1'){
            int add=power(2,t.size()-1-i);
            add%=M;
            ans+=add;
            ans%=M;
        }
    }
    cout<<ans;
    //return 0;
}
