// in the name of ALLAH

#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
int main()
{
    op();
    int n, l1, l2, r1, r2, m, mr;
    l1 = l2 = r1 = r2 = m = mr = 0;
    cin >> n;
    int x[n], y[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (x[i] == 1)
            l1++;
        if (x[i] == 0)
            l2++;
        if (y[i] == 1)
            r1++;
        if (y[i] == 0)
            r2++;
    }
    m = (l1 < l2) ? l1 : l2;
    mr = (r1 < r2) ? r1 : r2;
    cout << m + mr << "\n";
    return 0;
}