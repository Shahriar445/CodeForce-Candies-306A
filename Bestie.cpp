// Problem: A. Bestie
// Contest: Codeforces - Codeforces Round #830 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1732/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
void solve ()
{
	int n;
	cin>>n;
	int arr[n];
	int x=0,y=0,g=0;
	for (int i=1;i<n+1;++i)
	{
		cin>>arr[i];
		g=__gcd(g,arr[i]);	
	}
	//if (g==1)cout<<0<<endl;
	x=__gcd(arr[n],n);
	y=__gcd(arr[n-1],n-1);
	if (g==1)cout<<0<<endl;
	else if ( __gcd(g,x)==1)cout<<1<<endl;
	else if ( __gcd (g,y)==1)cout<<2<<endl;
	else cout<<3<<endl;
		
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
