#include <iostream>
using namespace std;


string solve(int n,string s)
{
	int x=0,y=0;
	for (int i=0 ;i<n;i++)
	{
		char mv =s[i];
		
		if (mv=='L')x--;
		else if (mv=='R')x++;
		else if (mv=='U')y++;
		else if (mv=='D')y--;
		
		if (x==1 && y==1)
		{
			return "YES";
		}
	}
	return "NO";
	
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	cin>>n;
    	string s;
    	cin>>s;
    	
    	cout<<solve(n,s)<<endl;
    	
    	
    }
    
    
    
    return 0;
}