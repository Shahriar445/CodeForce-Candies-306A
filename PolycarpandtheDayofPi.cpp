// Problem: A. Polycarp and the Day of Pi
// Contest: Codeforces - Codeforces Round #847 (Div. 3)
// URL: https://codeforces.com/contest/1790/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>

using namespace std;
void solve ()
{

	string pi = "314159265358979323846264338327";
	string n;
	cin>>n;
	int cnt=0 ;
	for (int i =0 ;i< n.size();++i)
	{
		if (n[i]==pi[i])cnt++;
		else 
		{
			break;
		}
	}
	cout<<cnt<<"\n";
}
int main()
{
	int t=1;
	
	cin>>t;
	
	while (t--)
	{
		solve();
	}
	}