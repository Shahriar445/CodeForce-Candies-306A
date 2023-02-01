#include<bits/stdc++.h>
using namespace std;

void solve()
{

    int n,sum=0;
    cin>>n;
    int a[n];
    int f=0,m=0;
    for (int i =0; i<n;i++)
    {

        cin>>a[i];
        if (a[i]<0)f=1;
        if (a[i]>0)m=1;
    }

   for (int i =0 ;i<n-1;i++)
   {

       if (a[i]==-1 && a[i+1]==-1)
       {

           a[i]=1;
           a[i+1]=1;
           break;
       }
   }
   for (int i = 0 ;i<n;i++)
   {

       sum+=a[i];
   }
   if (f==0)cout<<sum-4<<endl;
   else if (m==0)cout<<(n*(-1))+4<<endl;
   else cout<<sum<<endl;

}
int main()
{

    int t;
    cin>>t;
    while (t--)
    {

        solve();
    }
}
