#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%4==0||n%7==0||n%44==0||n%47==0||n%74==0||n%77==0||n%444==0||n%447==0||n%474==0||n%477==0||n%744==0||n%747==0||n%774==0||n%777==0)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";    

    return 0;
}
static int B, H;
static boolean flag = true;
static {

 Scanner sc = new Scanner(System.in);
 B = sc.nextInt();
 H = sc.nextInt();
 sc.close();
 try {
  if (B <= 0 || H <= 0)
   throw new Exception("Breadth and height must be positive");
 } catch (Exception e) {
  System.out.println(e);
  System.exit(0);
 }

}