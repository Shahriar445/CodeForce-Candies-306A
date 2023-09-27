#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i =0 ;i<n;i++)cin>>arr[i];

    bool test =false;
    for (int i=0 ;i<n;i++)
    {

        if (arr[i]==k){
            test=true;
        }
    }
    if (test)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
int main()
{
    int t;cin>>t;
    while (t--)
    {

        solve();
    }

}
