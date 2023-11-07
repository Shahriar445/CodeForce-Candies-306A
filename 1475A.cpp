
//            B I S M I L L A  H I R  R A H M A N I R  R A H I M
#include<bits/stdc++.h>
using namespace std;

//-----------------------------------------------------------

#define tcase            int t;cin>>t;while(t--)
#define faster           ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F                first
#define S                second
#define pb               push_back
#define nl               <<"\n"

//-----------------------------------------------------------


//BinarrySearch
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


//-----------------------------------------------------------

void solves()
{
	long long int n;
	cin>>n;



	if (n &( n-1)){
        cout<<"YES" nl;
	}
	else cout<<"NO" nl;

}



void init_code()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt","w",stdout);
	#endif

}
int32_t main(){

       faster
	   tcase(solves());

	//BinarrySearch(arr,x)<<endl;

	return 0;

}
