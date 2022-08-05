#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a1 = 0, a2 = 0, a3 = 0;

    cin >> n;
    char a[n + 2];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == '1')
            a1++;
        else if (a[i] == '2')
            a2++;
        else
            a3++;
    }
    int mx = max(max(a1, a2), a3);
    cout << a1 + a2 + a3 - mx;
}