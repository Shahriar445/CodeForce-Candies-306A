#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,H,M;

    cin>>n>>H>>M;
    int total_min=H*60 + M;

    int mint=24*60;
    int totalMnt;

    for (int i =1 ;i<=n;i++)
    {

        int hi,mi;
        cin>>hi>>mi;

        int x =hi*60 +mi;
        totalMnt=x-total_min;

        if (totalMnt<0)
        {
            totalMnt+=24*60;
        }
        mint=min(mint,totalMnt);


    }
    cout<<mint/60 <<" " <<mint%60<<endl;


















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
