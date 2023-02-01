#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    string s;
    for (int i= 1;i<=n;i++)
    {
        cin>>s;
        if (s[0]+s[1]+s[2]==s[3]+s[4]+s[5])
        {

            cout<<"yes"<<endl;
        }
        else cout<<"no"<<endl;


    }
}
