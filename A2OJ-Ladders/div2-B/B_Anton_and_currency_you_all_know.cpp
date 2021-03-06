#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    string n,s;
    cin>>n;
     ll b=n.size();
    int c=0,d=0,x;
    int y=n[b-1]-'0';
    for(int i=0;i<n.size()-1;i++){
        x=n[i]-'0';
        if(x%2==0){
            d++;
            if(y>x){
                s=n;
                swap(s[i],s[n.size()-1]);
                c++;
                break;
            }
        }
    }
    if(c==0){
        if(d==0)
            cout<<-1;
        else{
            for(int i=n.size()-2;i>=0;i--){
                x=n[i]-'0';
                if(x%2==0){
                    s=n;
                    swap(s[i],s[n.size()-1]);
                    break;
                }
            }
            cout<<s;
        }
    }
    else
       cout<<s;
    return 0;
}