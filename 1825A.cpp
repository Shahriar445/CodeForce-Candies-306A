#include<bits/stdc++.h>
using namespace std;

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

// Write your logic here 

// void solve()
// {
// 	int n;
// 	cin>>n;
// 	vector <pair <int,int >>v(n);

//     for (int i=0;i<n;++i){
//         cin>>v[i].first>>v[i].second;
//     }

//     int ans =-1 ;

//     for (int i =0 ;i<n;i++){
//         if (v[i].first<=10){
//             if (ans ==-1 || v[i].second> v[ans].second){
//                 ans =i;
//             }
//         }
//     }
//     cout<<(ans+1)<<endl;


	


// }
// void solve (){
//     char m[8][8];
//     for (int i=0 ;i<8;i++){
//         for (int j=0;j<8;j++){
//             cin>>m[i][j];
//         }
//     }

//     string ans ;

//     for (int j=0 ;j<8 ;++j){
//         for (int i =0 ;i<8;++i){
//             if (m[i][j]!='.'){
//                 ans.push_back(m[i][j]);
//             }
//         }
//     }
//     cout<<ans <<endl;




// }
void solve()
{
   
    string s;
    cin>>s;
    sort(s.begin(),s.end());

    if (s[0]==s[s.size()-1]){
        cout<<-1<<endl;
    }else cout<<s.size()-1<<endl;

   

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