// Problem: A. GamingForces
// Contest: Codeforces - Educational Codeforces Round 142 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1792/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,x;
	cin>>n;
	
	int cnt=0;
	for (int i = 0 ; i<n;i++)
	{
		cin>>x;
		if (x==1)cnt++;
	}
	int  ans = n-cnt/2;
	cout<<ans<<endl;
}
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		solve ();
	}
}