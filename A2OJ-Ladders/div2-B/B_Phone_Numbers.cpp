#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   int n;
   cin>>n;
   int t[n]={0},p[n]={0},g[n]={0};
   vector<string>v(n);
   for(int i=0;i<n;i++){
       int m;
       string s;
       cin>>m>>s;
       v[i]=s;
       while(m--)
       {
           string r;
           cin>>r;
           int x=r[0]-'0',is_Taxi=1,is_Pizza=1;
           for(int i=1;i<r.size();i++){
               if(i!=2&&i!=5)
               {
                int y=r[i]-'0';
                if(x!=y){
                    is_Taxi=0;
                    break;
                }
               }
           }
           for(int i=1;i<r.size();i++)
           {
               int y=r[i]-'0';
               if(i!=2&&i!=5)
               {
                if(x<=y){
                    is_Pizza=0;
                    break;
                }
                else{
                    x=y;
                }
               }
           }
           if(is_Taxi==1)
               t[i]++;
           else if(is_Pizza==1)
                p[i]++;
           else
                g[i]++;
       }
       
   }
   int m1=-1,m2=-1,m3=-1;
    for(int i=0;i<n;i++){
        m1=max(m1,t[i]);
    }
     for(int i=0;i<n;i++){
        m2=max(m2,p[i]);
    }
     for(int i=0;i<n;i++){
        m3=max(m3,g[i]);
    }
   vector<string>t1,p1,g1;
   for(int i=0;i<n;i++){
       if(t[i]==m1){
           t1.push_back(v[i]);
       }
   }
   for(int i=0;i<n;i++){
       if(p[i]==m2){
           p1.push_back(v[i]);
       }
   }
   for(int i=0;i<n;i++){
       if(g[i]==m3){
            g1.push_back(v[i]);
       }
   }
    cout<<"If you want to call a taxi, you should call: ";
    for(int i=0;i<t1.size();i++){
        if(i==t1.size()-1){
            cout<<t1[i]<<".\n";
        }
        else{
            cout<<t1[i]<<", ";
        }

    }
     cout<<"If you want to order a pizza, you should call: ";
    for(int i=0;i<p1.size();i++){
        if(i==p1.size()-1){
            cout<<p1[i]<<".\n";
        }
        else{
            cout<<p1[i]<<", ";
        }
    }
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    for(int i=0;i<g1.size();i++){
        if(i==g1.size()-1){
            cout<<g1[i]<<".\n";
        }
        else{
            cout<<g1[i]<<", ";
        }
    }
    

}