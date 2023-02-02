// Problem: A. Everybody Likes Good Arrays!
// Contest: Codeforces - Codeforces Round #845 (Div. 2) and ByteRace 2023
// URL: https://codeforces.com/contest/1777/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,x=0;
	cin>>n;
	int arr[n];
	for (int i=0 ;i<n;i++)cin>>arr[i];
	
	for (int i=0 ;i<n-1;i++)
	{
		if ((arr[i]+arr[i+1])%2==0)x++;
	}
	cout<<x<<endl;
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