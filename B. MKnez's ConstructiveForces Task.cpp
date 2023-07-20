#include<bits/stdc++.h>
using namespace std;
#define int long long int 
#define ll long long 
#define F first
#define S second 
#define pb push_back
#define endl "\n"
#define no "NO"
#define yes "YES"

	
void solve()
{
	int n=1;
	cin>>n;

	if (n&1){
		
		if (n==3){
			cout<<no<<endl;

		}

		else {
			cout<<yes<<endl;

			int tmp =n/2;

			for (int i=1;i<=n ;i++){
				if (i&1){
					cout<<tmp-1<<" ";

				}
				else {
					cout<<-tmp<<" ";
				}
			}
			cout<<endl;
			}

	}

	else {
		cout<<yes<<endl;

		for (int i =1;i<=n;i++){

			if (i&1){
				cout<<"5 ";
			}
			else {
				cout<<"-5 ";
			}

		}
		cout<<endl;
	}



}

int32_t main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w",stdout);
#endif

	int t=1;
	cin >> t;
	while (t--) solve();

	return 0;

}