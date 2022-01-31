### [Different String](https://www.codechef.com/COOK132B/problems/DIFSTR)

``` cpp
Problem Statement:You are given N binary strings of length N each. You need to find a binary string of length N which is different from all of the given strings.

```

## Approach1

``` cpp
void solve(){
	int n;
    cin>>n;
    vector<string>v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.pb(s);
    }
    sort(v.begin(),v.end());
    for(int i=n-1;i>=0;i--){
        string r=v[i];
        for(int j=0;j<r.size();j++){
            if(r[j]=='0'){
                r[j]='1';
                if(i!=n-1 and r==v[i+1]){
                    continue;
                }
                cout<<r<<endl;
                return;
            }
            
        }
    }
	
}

```

## Approach2

``` cpp

```