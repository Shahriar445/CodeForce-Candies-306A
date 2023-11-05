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
	long long  n;
	cin>>n;
	
	int c1= n/3;
	int c2=c1;
	if (n%3==1){
		c1+=1;
	}
	else if (n%3==2)
	{
		c2+=1;
	}
	cout<<c1<<" "<<c2<<"\n";
}

int32_t main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


	int t=1;
	cin >> t;
	while (t--) solve();



	//BinarrySearch(arr,x)<<endl;

	return 0;

}