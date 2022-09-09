#include <bits/stdc++.h>
using namespace std;
#define yes printf("YES\n")
#define no printf("NO\n")
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    op();
    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    while (n--)
    {
        string name, ip;

        cin >> name >> ip;
        mp[ip] = name;
    }
    while (m--)
    {
        string s, ip;
        cin >> s >> ip;

        ip.pop_back();
        cout << s << " " << ip << "; #" << mp[ip] << "\n";
    }

    return 0;
}