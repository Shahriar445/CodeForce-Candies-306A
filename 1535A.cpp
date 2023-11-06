#include<bits/stdc++.h>
using namespace std;
#define int long long int 
#define F first
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
	
	int s1,s2,s3,s4;

	cin>>s1>>s2>>s3>>s4;

	int t1,t2;
	if (s1>s2){
		t1=s1;
	}
	else{
		t1=s2;
	}

int c1=0,c2=0;
	if (s3>s4)
	{
		t2=s3;
		if (t1>s4){
			c1+=1;

		}
	}
	else {
		t2=s4;
		if (t1>s3)
		{
			c1+=1;
		}
	}

	if (s1>s2){
		if (t2>s2){
			c2+=1;
		}
	}else {
		if (t2>s1)
		{
			c2+=1;
		}
	}

	if (c1==1 && c2==1)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;



}

int32_t main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


	int t=1;
	cin >> t;
	while (t--) solve();



	//BinarrySearch(arr,x)<<endl;

	return 0;

}