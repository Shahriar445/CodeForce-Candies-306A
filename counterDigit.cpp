#include<bits/stdc++.h>
using namespace std;
	
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w",stdout);
#endif

     // Write Code here 

	int n;
	cin>>n;

	int count =0;
	int Nu=n;

	while (Nu!=0){
		int digit =Nu%10;
		if (digit !=0 && n%digit ==0 ){
			count++;
		}
		Nu/=10;
	}
	cout<<count<<endl;


}