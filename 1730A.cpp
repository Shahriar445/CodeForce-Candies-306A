// in the name of ALLAH
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, c;
    cin >> n >> c;
    int arr[n];

    map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    int ans = 0;
    for (auto u : mp)
    {
        ans += min(u.second, c);
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}