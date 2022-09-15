// in the name of ALLAH

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    string s;
    cin >> t;

    while (t--)
    {
        cin >> n >> s;
        sort(s.begin(), s.end());

        if (s == "Timru")
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}