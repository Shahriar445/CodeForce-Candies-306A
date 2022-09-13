// in the name of ALLAH

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c;
        cin >> n;
        cin >> a >> b >> c;

        map<int, int> mp;

        mp[1] = a;
        mp[2] = b;
        mp[3] = c;
        int flag = 0;
        for (int i = 1; i < 3; i++)
        {
            if (mp[n] == 0)
            {
                flag = 1;
                break;
            }
            else
                n = mp[n];
        }
        if (flag == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}