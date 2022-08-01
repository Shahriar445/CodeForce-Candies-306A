#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100], n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n); // sort the element like >>> -2 -6 0 4 35
    int s(0);
    for (int i = 0; i < m; i++)
    {
        if (a[i] >= 0)
        {
            break;
        }
        else
            s += a[i];
    }
    cout << -s << endl;
}
