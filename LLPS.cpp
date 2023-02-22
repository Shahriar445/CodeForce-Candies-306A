// Problem: A. LLPS
// Contest: Codeforces - Codeforces Round #127 (Div. 2)
// URL: https://codeforces.com/problemset/problem/202/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{

	string s,cn;
	cin>>s;
	int x,mx=0;
	for (int i=0 ;i<s.size();i++)
	
	{
		x=s[i];
		mx =max(mx,x);
	}
	for (int i=0 ;i<s.size ();i++)
	{
		if (s[i]==mx)
		{
			cn +=s[i];
		}
	}
	cout<<cn;
}
