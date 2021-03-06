#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,s;
    cin>>m>>s;
    if(s>m*9)
        cout<<-1<<" "<<-1;
    else if(m==1)
        cout<<s<<" "<<s;
    else if(s==0)
        cout<<-1<<" "<<-1;
    else{
        int c[m]={0},b[m]={0};
        for(int i=0;i<m;i++){
            if(s>=9){
                c[i]=9;
                b[i]=9;
                s=s-9;
            }
            else{
                c[i]=s;
                b[i]=s;
                s=0;
                break;
            }
        }
        if(c[m-1]!=0){
             for(int i=m-1;i>=0;i--)
                cout<<c[i];
        }
        else{
            c[m-1]=1;
            for(int i=m-2;i>=0;i--)
            {
                if(c[i]>0){
                    c[i]-=1;
                    break;
                }
            }
             for(int i=m-1;i>=0;i--)
                cout<<c[i];
        }
        cout<<" ";
        for(int i=0;i<m;i++)
            cout<<b[i];
    }


    return 0;
}