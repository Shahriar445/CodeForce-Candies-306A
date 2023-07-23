#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define S second 
#define pb push_back
#define endl "\n"


int BinarrySearch(vector <int> & arr, int x){
	int low=0, hi=arr.size()-1;

	while (hi-low > 1){
		int mid =(hi+low)/2;

		if (arr[mid]<x){
			low=mid+1;
		}
		else {
			hi=mid;
		}
	}

	if (arr[low]==x){
	    return low;
	}
	else if (arr[hi]==x){
		return hi;
	}
	else {
		return -1;
	}
}	


void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;

	int x =1,ans=1;

	for (int i=0 ;i<n;i++){

		if (s[i] != s[i-1])x=1;
		else x++;

		ans =max(ans,x);
	}
	cout<<ans +1 <<endl;

    
   
	
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



	//BinarrySearch(arr,x)<<endl;

	return 0;

}
